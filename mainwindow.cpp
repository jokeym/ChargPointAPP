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
    ui->lineEdit_ResidueCnt->setReadOnly(true);
    ui->lineEdit_NowPower->setReadOnly(true);
    ui->Now_dateTimeEdit->setReadOnly(true);

    ui->groupBox_PortInfo->hide();
    ui->groupBox_text->hide();


    qDebug()<<"213"<<1.8*220;

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
    ui->Set_dateTimeEdit->setDateTime(QDateTime::currentDateTime());
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

    if(cmdstr=="CTRLINFO")
        cmd = CMD_CTRLINFO;
    if(cmdstr=="OK")
        cmd = CMD_OK;
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
                return ;
            }

            cmd = GetCMDType(list.at(1));
            switch(cmd){
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
                    ui->lineEdit_ResetTime->setText(list.at(10));
                }
                else{
                    ui->lineEdit_ResetTime->setText("未设置重启时间");
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

    case CMD_SETCTRL:
        RecvUart.MinCurrent = ui->doubleSpinBox_MinCurrent->value();
        RecvUart.MaxCurrent = ui->doubleSpinBox_MaxCurrent->value();

        if(RecvUart.MinCurrent < DEFAULT_SET_MIN_CURRENT || !RecvUart.MinCurrent){
            break;
        }
        if(RecvUart.MaxCurrent > DEFAULT_SET_MAX_CURRENT || !RecvUart.MaxCurrent){
//            ui->lineEdit_MinCurrent->setText("最大电流设置出错");
            break;
        }

        if(RecvUart.MinCurrent > RecvUart.MaxCurrent){
//            ui->lineEdit_MinCurrent->setText("最小电流不允许小于最大电流");
//            ui->lineEdit_MinCurrent->setText("最小电流不允许小于最大电流");
            break;
        }


        RecvUart.SetRTCTime =ui->Set_dateTimeEdit->dateTime().toTime_t() /*+ 3600*8*/;   //将当前时间转为时间戳
        //        qDebug()<<"设置的时间："<<ui->Set_dateTimeEdit->dateTime().toString("yyyy-MM-dd HH:mm:ss");

        if(ui->radioButton_RestartFlag->isChecked()){
            RecvUart.RestartFlag =1;
            RecvUart.RestartTime =ui->lineEdit_ResetTime->text().toInt(&ok,10);

            if(!RecvUart.RestartTime || RecvUart.RestartTime>24){
                ui->lineEdit_ResetTime->setText("设置时间出错");
                break;
            }
        }
        else {
            RecvUart.RestartFlag =0;
            RecvUart.RestartTime =0;
        }


        sprintf(p,"SETCTRL,%.2f,%.2f,%d,%d,%d",RecvUart.MinCurrent,RecvUart.MaxCurrent,\
                RecvUart.SetRTCTime,RecvUart.RestartFlag,RecvUart.RestartTime);
        break;
    }

    AddChecksum(sMessage);

    return sMessage;

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

    //    ui->lineEdit->setText(EncodMsg(CMD_CTRLINFO));
    //    on_pushButton_Send_clicked();
}

void MainWindow::on_radioButton_RestartFlag_clicked()
{
    if(ui->radioButton_RestartFlag->isChecked()){
        ui->lineEdit_ResetTime->setEnabled(true);
    }
    //    else{
    //        ui->lineEdit_ResetTime->setEnabled(false);
    //    }


}
