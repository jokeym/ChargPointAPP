#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "stdio.h"
#include "string.h"
#include <QDateTime>
#include "string.h"


RecvUart_t RecvUart;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    ui->Set_dateTimeEdit->setDateTime(QDateTime::currentDateTime());
    ui->dateTimeEdit_KeyExpirationTime->setDateTime(QDateTime::currentDateTime());

    ui->groupBox_PortInfo->hide();
    ui->groupBox_text->hide();
    ui->groupBox_Activation->hide();
    ui->groupBox_ResidueCnt->hide();

    foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        QSerialPort serial;
        serial.setPort(info);
        if(serial.open(QIODevice::ReadWrite))
        {
            ui->PortBox->addItem(serial.portName());
            serial.close();
        }
    }

    decodetimer = new QTimer(this);
    connect(decodetimer, SIGNAL(timeout()), this, SLOT(DecodeMsg()));
    decodetimer->start(100);

    UpdateDateTimer = new QTimer(this);
    connect(UpdateDateTimer, SIGNAL(timeout()), this, SLOT(updateDateSlots()));
    UpdateDateTimer->start(1000);





}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateDateSlots(){
    /*更新时间*/
    ui->Set_dateTimeEdit->setDateTime(QDateTime::currentDateTime());

    /*自动搜索串口号*/
    if(ui->PortBox->currentIndex()<0){
        foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
        {
            QSerialPort serial;
            serial.setPort(info);
            if(serial.open(QIODevice::ReadWrite))
            {
                ui->PortBox->addItem(serial.portName());
                serial.close();
            }
        }
    }

}

int MainWindow::checksum(QString str){

    unsigned char sum = 0;
    unsigned char cs = 0;
    int i = 0;

    QByteArray sdata = str.toLatin1();
    unsigned char *buff  = (unsigned char *)sdata.data();

    char *p = strchr((char *)buff, '*');

    if (!p)
        return 0;

    for (i = 1; buff[i] != '*'; i++)
    {
        sum ^= buff[i];
    }
    cs = strtol(p + 1, (char **)NULL, 16);

    return cs == sum;
}

void MainWindow::AddChecksum(char *p){
    char *q = NULL;
    unsigned char sum = 0;
    for (q = p + 1, sum = 0; *q; q++)
        sum ^= *q; /* check-sum */
    sprintf(p + strlen(p), "*%02X", sum);

}



void MainWindow::Read_Data()
{
    QByteArray buf;
    buf = serial->readAll();
    if(!buf.isEmpty())
    {
        RecvUart.RecvStr+=tr(buf);
    }

}

void MainWindow::on_pushButton_Open_clicked()
{

    if(ui->PortBox->currentIndex()<0)
        return ;

    if(ui->PortBox->isEnabled()){
        serial = new QSerialPort;

        //设置串口名
        serial->setPortName(ui->PortBox->currentText());
        //打开串口
        serial->open(QIODevice::ReadWrite);
        //设置波特率
        serial->setBaudRate(115200);
        //设置数据位数
        serial->setDataBits(QSerialPort::Data8);

        //设置奇偶校验
        serial->setParity(QSerialPort::NoParity);

        //设置停止位
        serial->setStopBits(QSerialPort::OneStop);

        //设置流控制
        serial->setFlowControl(QSerialPort::NoFlowControl);
        //关闭设置菜单使能
        ui->PortBox->setEnabled(false);
        //连接信号槽
        QObject::connect(serial, &QSerialPort::readyRead, this, &MainWindow::Read_Data);

        ui->pushButton_Open->setText("关闭");
        RecvUart.UartOpenFlag = 1;
    }
    else{
        serial->clear();
        serial->close();
        serial->deleteLater();
        ui->PortBox->setEnabled(true);
        ui->pushButton_Open->setText("打开");
        RecvUart.UartOpenFlag = 0;
    }


}

void MainWindow::on_pushButton_Clean_clicked()
{
    ui->textEdit->clear();

}

CMD_TYPE_t MainWindow::GetCMDType(QString cmdstr){
    CMD_TYPE_t cmd = CMD_UNKNOWN;

    if(cmdstr=="OK")
        cmd = CMD_OK;
    else if(cmdstr=="CTRLINFO")
        cmd = CMD_CTRLINFO;
    else if(cmdstr=="UID")
        cmd = CMD_UID;

    qDebug()<<"cmd:"<<cmd;

    return cmd;
}

void MainWindow::on_pushButton_Send_clicked()
{
    if(RecvUart.UartOpenFlag){
        RecvUart.RecvStr.clear();
        decodetimer->start(100);
        serial->write((ui->lineEdit->text()+"\n").toLatin1());
    }
    else{
        ui->textEdit->append("串口未打开");
        ui->statusBar->showMessage("串口未打开",3000);
    }

}

void MainWindow::DecodeMsg(){
    QString str = RecvUart.RecvStr;
    CMD_TYPE_t cmd = CMD_NULL;
    bool ok;
    if(!str.isEmpty()){
        ui->textEdit->append(str);

        RecvUart.RecvStr.clear();

        QStringList listcmd = str.split(QRegExp("[\r\n]"),QString::SkipEmptyParts);

        for(quint8 i = 0 ; i<listcmd.size();i++){
            qDebug()<<"收到的指令："<<listcmd.at(i);

            if(!checksum(listcmd.at(i))){
                qDebug()<<"校验出错";
                continue;
            }

            QStringList list = listcmd.at(i).split(QRegExp("[,*]"));

            if(list.at(0)!="$CHARGE"){
                qDebug()<<"数据出错";
                ui->statusBar->showMessage("数据出错",3000);
                return ;
            }

            cmd = GetCMDType(list.at(1));
            switch(cmd){
            case CMD_UID:
                RecvUart.UIDStr = list.at(2);
                ui->lineEdit_UUID->setText(list.at(2));
                break;

            case CMD_CTRLINFO:
                QString str;
                RecvUart.MinCurrent = list.at(2).toFloat();
                RecvUart.MinPower = RecvUart.MinCurrent * 220;
                ui->doubleSpinBox_MinCurrent->setValue(RecvUart.MinCurrent);
                str = QString::number(RecvUart.MinPower,10);
                ui->lineEdit_MinPower->setText(str);

                RecvUart.MaxCurrent = list.at(3).toFloat();
                RecvUart.MaxPower = RecvUart.MaxCurrent * 220;
                ui->doubleSpinBox_MaxCurrent->setValue(RecvUart.MaxCurrent);

                str = QString::number(RecvUart.MaxPower,10);
                ui->lineEdit_MaxPower->setText(str);

                ui->lineEdit_NowPower->setText("通道 "+list.at(4) +" 功率: "+list.at(5) +" W");

                ui->lineEdit_ResidueCnt->setText(list.at(6));

                QDateTime dateTime;

                quint32 sdate = list.at(7).toInt(&ok,10);
                quint32 stime = list.at(8).toInt(&ok,10);

                RecvUart.year = sdate/10000;
                RecvUart.month = (sdate - RecvUart.year*10000)/100;
                RecvUart.day = sdate%100;

                RecvUart.hour = stime/10000;
                RecvUart.min  = (stime - RecvUart.hour*10000)/100;
                RecvUart.sec  = stime%100;
                QDate qdate;
                qdate.setDate(RecvUart.year,RecvUart.month,RecvUart.day);

                QTime qtime;
                qtime.setHMS(RecvUart.hour,RecvUart.min,RecvUart.sec);

                dateTime.setDate(qdate);
                dateTime.setTime(qtime);

                ui->Now_dateTimeEdit->setDateTime(dateTime);

                if(list.at(10).toInt(&ok,10)){
                    ui->radioButton_RestartFlag->setChecked(true);
                    ui->doubleSpinBox_ReStartHour->setValue(list.at(10).toDouble());
                    ui->doubleSpinBox_ReStartIntervalTime->setValue(list.at(11).toDouble());
                    ui->statusBar->showMessage("夜间重启功能已开启",5000);

                }
                else{
                    ui->radioButton_RestartFlag->setChecked(false);
                    ui->doubleSpinBox_ReStartHour->setEnabled(false);
                    ui->doubleSpinBox_ReStartIntervalTime->setEnabled(false);
                    ui->statusBar->showMessage("夜间重启功能未开启",5000);
                }

                break;


            }
        }


    }

}

QString MainWindow::EncodMsg(CMD_TYPE_t cmd){
    static char sMessage[256] = {0};
    char *p = sMessage;
    bool ok=true;

    strcpy(p, "$CHARGE,");
    p += 8; //strlen(p);

    switch (cmd)
    {
    case CMD_OK:
        strcpy(p, "OK");
        break;
    case CMD_ERROR:
        strcpy(p, "ERROR");
        break;
    case CMD_UNKNOWN:
        strcpy(p, "UNKNOWN");
        break;

    case CMD_CONNECT:
        strcpy(p, "CONNECT,1");
        break;

    case CMD_GETCTRL:
        strcpy(p, "GETCTRL");
        break;

    case CMD_GETUID:
        strcpy(p, "GETUID");
        break;
    case CMD_FACTORY:
        sprintf(p,"FACTORY,KEY,%s",ui->lineEdit_keyActivation->text().toStdString().c_str());
        break;

    case CMD_SETCTRL:
        RecvUart.MinCurrent = ui->doubleSpinBox_MinCurrent->value();
        RecvUart.MaxCurrent = ui->doubleSpinBox_MaxCurrent->value();

        if(RecvUart.MinCurrent < DEFAULT_SET_MIN_CURRENT){
            ui->statusBar->showMessage("最小电流设置出错",3000);
            break;
        }
        if(RecvUart.MaxCurrent > DEFAULT_SET_MAX_CURRENT || !RecvUart.MaxCurrent){
            ui->statusBar->showMessage("最大电流设置出错",3000);
            break;
        }

        if(RecvUart.MinCurrent > RecvUart.MaxCurrent){
            ui->statusBar->showMessage("最小电流不允许小于最大电流",3000);
            break;
        }


        RecvUart.SetRTCTime =ui->Set_dateTimeEdit->dateTime().toTime_t() /*+ 3600*8*/;   //将当前时间转为时间戳
        //        qDebug()<<"设置的时间："<<ui->Set_dateTimeEdit->dateTime().toString("yyyy-MM-dd HH:mm:ss");

        if(ui->radioButton_RestartFlag->isChecked()){
            RecvUart.RestartFlag =1;
            RecvUart.RestartTime =ui->doubleSpinBox_ReStartHour->value();
            RecvUart.ReStartIntervalTime = ui->doubleSpinBox_ReStartIntervalTime->value();
            //            if(!RecvUart.RestartTime || RecvUart.RestartTime>6){
            //                break;
            //            }

            //            if(RecvUart.ReStartIntervalTime<1 || RecvUart.ReStartIntervalTime>30)
            //                break;
        }
        else {
            RecvUart.RestartFlag =0;
            RecvUart.RestartTime =0;
            RecvUart.ReStartIntervalTime =0;
        }


        sprintf(p,"SETCTRL,%.2f,%.2f,%d,%d,%d,%d",RecvUart.MinCurrent,RecvUart.MaxCurrent,\
                RecvUart.SetRTCTime,RecvUart.RestartFlag,RecvUart.RestartTime,RecvUart.ReStartIntervalTime);
        break;
    }

    AddChecksum(sMessage);

    return sMessage;

}

// 通用密码和CRC计算数据
//static const unsigned char crc_tmp_data[128] = {
//    //     0    1     2     3      4     5     6    7      8    9     A     B      C     D     E     F
//    /*0*/ 0x39, 0x18, 0xbb, 0x5a, 0xdd, 0x22, 0xff, 0xee, 0x62, 0x56, 0xf2, 0x14, 0x66, 0x77, 0x44, 0x55,\
//    /*1*/ 0x2b, 0x90, 0x21, 0x32, 0x42, 0x54, 0x27, 0x76, 0xea, 0x68, 0xf0, 0x89, 0xfe, 0xef, 0x2c, 0xcd,\
//    /*2*/ 0x00, 0x21, 0x22, 0x93, 0x44, 0x55, 0xc6, 0x27, 0x88, 0x63, 0x25, 0xbb, 0xcc, 0x3a, 0xce, 0x2c,\
//    /*3*/ 0x31, 0x10, 0x32, 0x20, 0x55, 0x44, 0xf7, 0x26, 0x34, 0x60, 0x20, 0x01, 0xc3, 0x67, 0x54, 0x05,\
//    /*4*/ 0xaa, 0xbb, 0x88, 0x2c, 0xf7, 0xff, 0xcc, 0x8d, 0x33, 0x63, 0x23, 0x10, 0xd7, 0x66, 0x55, 0xb4,\
//    /*5*/ 0x5b, 0xaa, 0x99, 0x60, 0xd2, 0xf2, 0x2d, 0xfe, 0xff, 0x66, 0x29, 0xcf, 0xbb, 0x3a, 0x99, 0x78,\
//    /*6*/ 0x88, 0xa9, 0xca, 0x70, 0xdc, 0x22, 0xfe, 0x6f, 0x2c, 0xa1, 0x30, 0x20, 0x50, 0x25, 0x76, 0x3a,\
//    /*7*/ 0x48, 0x55, 0x87, 0x80, 0x08, 0x61, 0x22, 0x23, 0x66, 0x23, 0x43, 0x55, 0x2c, 0x33, 0x00, 0x41,\
//};

static const unsigned char crc_tmp_data[128] ={0};
void MainWindow::EncodeKeyString(unsigned char *uckey){
    unsigned int temp[7] = {0};
    bool ok;
    temp[0] = (uckey[KEY_POS_0]<<8)  | (uckey[KEY_POS_1]);
    temp[1] = (uckey[KEY_POS_2]<<8)  | (uckey[KEY_POS_3]);
    temp[2] = (uckey[KEY_POS_4]<<8)  | (uckey[KEY_POS_5]);
    temp[3] = (uckey[KEY_POS_6]<<8)  | (uckey[KEY_POS_7]);
    temp[4] = (uckey[KEY_POS_8]<<8)  | (uckey[KEY_POS_9]);
    temp[5] = (uckey[KEY_POS_10]<<8) | (uckey[KEY_POS_11]);

    //    qDebug("keyString：%04X-%04X-%04X-%04X-%04X-%04X", temp[0], temp[1], temp[2], temp[3], temp[4], temp[5]);

    QString str , strkey;
    for(uint8_t i = 0 ; i < 6 ; i++){
        str = QString::number(temp[i],16).toUpper();
        strkey += QString("%1").arg(str.toInt(&ok,16),4,16,QLatin1Char('0')).toUpper();
        if(i<5)
            strkey +="-";
    }

    keyExpirateTimeStr = strkey;
    ui->lineEdit_keyActivation->setText(keyExpirateTimeStr);

    ui->statusBar->showMessage("生成秘钥："+keyExpirateTimeStr,6000);
}


int MainWindow::EncodeActivekey(void){
    bool ok;
    unsigned int UID[3];
    QString str = RecvUart.UIDStr;
    QStringList list;
    list = str.split('-');
    for(uint8_t i =0 ; i < list.count() ; i ++){
        str = list.at(i).toLocal8Bit().data();
        UID[i] = str.toUInt(&ok,16);
    }

    unsigned char *ucUID = (unsigned char *)UID;
    unsigned int key[3] = {0};
    unsigned char *uckey = (unsigned char *)key;

    QDateTime time = QDateTime::currentDateTime();   //获取当前时间
    sCreateTime = time.toTime_t();   //将当前时间转为时间戳

    sExpirateTime = ui->dateTimeEdit_KeyExpirationTime->dateTime().toTime_t();


    if(sCreateTime > sExpirateTime){
        ui->statusBar->showMessage("设备到期时间设置出错",3000);
        return 0;
    }
    sExpirateTime = sCreateTime - 8888;

    key[2] = UID[0] ^ sExpirateTime;
    key[1] = UID[1] ^ sCreateTime;
    key[0] = UID[2] ^ sExpirateTime;


    if ((key[0] ^ UID[2]) != (key[2] ^ UID[0])){
        qDebug()<<"校验错误";
        return -1;
    }

    for (uint8_t i = 0; i < 12; i++)
    {
        uckey[i] = uckey[i] ^ crc_tmp_data[ucUID[i] >> 1];
    }

    EncodeKeyString(uckey);


}


void MainWindow::on_pushButton_GetCtrl_clicked()
{
    ui->lineEdit->setText(EncodMsg(CMD_GETCTRL));
    on_pushButton_Send_clicked();
}

void MainWindow::on_pushButton_SetCtrl_clicked()
{
    ui->lineEdit->setText(EncodMsg(CMD_SETCTRL));
    on_pushButton_Send_clicked();
}

void MainWindow::on_pushButton_GetUUID_clicked()
{
    ui->lineEdit->setText(EncodMsg(CMD_GETUID));
    on_pushButton_Send_clicked();
}

void MainWindow::on_pushButton_CreateKey_clicked()
{
    if(ui->lineEdit_UUID->text().isEmpty()){
        ui->statusBar->showMessage("请先获取设备的UUID",3000);

        return ;
    }

    EncodeActivekey();
}

void MainWindow::on_pushButton_WriteKey_clicked()
{

    ui->lineEdit->setText(EncodMsg(CMD_FACTORY));
    on_pushButton_Send_clicked();
}

void MainWindow::on_radioButton_RestartFlag_clicked()
{
    if(ui->radioButton_RestartFlag->isChecked()){
        ui->statusBar->showMessage("开启夜间通道重启功能",5000);
        ui->doubleSpinBox_ReStartHour->setEnabled(true);
        ui->doubleSpinBox_ReStartIntervalTime->setEnabled(true);
    }
    else{
        ui->statusBar->showMessage("关闭夜间通道重启功能",5000);
        ui->doubleSpinBox_ReStartHour->setEnabled(false);
        ui->doubleSpinBox_ReStartIntervalTime->setEnabled(false);
    }
}
