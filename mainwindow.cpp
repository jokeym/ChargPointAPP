#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "stdio.h"
#include "string.h"
#include <QDateTime>

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
    /*查找串口OK*/
    qDebug() << tr("界面设定成功！");

    decodetimer = new QTimer(this);
    connect(decodetimer, SIGNAL(timeout()), this, SLOT(DecodeMsg()));
    decodetimer->stop();
//    decodetimer->start(100);

}

MainWindow::~MainWindow()
{
    delete ui;
}

static int checksum(unsigned char *buff, int len)
{
    unsigned char sum = 0;
    unsigned char cs = 0;
    int i = 0;
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
        decodetimer->stop();

        QStringList listcmd = str.split(QRegExp("[\r\n]"),QString::SkipEmptyParts);

        for(quint8 i = 0 ; i<listcmd.size();i++){
            qDebug()<<"收到的指令："<<listcmd.at(i);
            QStringList list = listcmd.at(i).split(QRegExp("[,*]"));

            for(quint8 i = 0 ; i<list.size();i++)
                qDebug()<<list.at(i);

            if(list.at(0)!=CMD_HEAD){
                qDebug()<<"数据出错";
            }

            cmd = GetCMDType(list.at(1));

            switch(cmd){
            case CMD_CTRLINFO:
                qDebug()<<"CMD_SETCTRL";
                float value =  list.at(2).toFloat()*220;
                ui->lineEdit_MinPower->setText(QString("%1").arg(value));

                value =  list.at(3).toFloat()*220;
                ui->lineEdit_MaxPower->setText(QString("%1").arg(value));

                ui->lineEdit_NowPower->setText(list.at(4));
                ui->lineEdit_ResidueCnt->setText(list.at(5));

                QDateTime dateTime;
                uint32_t seconds = list.at(6).toInt(&ok,10);
                dateTime = QDateTime::fromTime_t(seconds);
                ui->Now_dateTimeEdit->setDateTime(dateTime);

                if(list.at(7).toInt(&ok,10)){
                    ui->radioButton_RestartFlag->setChecked(true);
                    ui->lineEdit_ResetTime->setText(list.at(8));
                }
                else{
                    ui->radioButton_RestartFlag->setChecked(false);
                    ui->lineEdit_ResetTime->setEnabled(false);
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
        RecvUart.MinCurrent = ui->lineEdit_MinPower->text().toFloat()/220.00;
        RecvUart.MaxCurrent = ui->lineEdit_MaxPower->text().toFloat()/220.00;

        RecvUart.SetRTCTime =ui->Set_dateTimeEdit->dateTime().toTime_t();   //将当前时间转为时间戳

        if(ui->radioButton_RestartFlag->isChecked()){
            RecvUart.RestartFlag =1;
            RecvUart.RestartTime =ui->lineEdit_ResetTime->text().toInt(&ok,10);
        }
        else {
            RecvUart.RestartFlag =0;
            RecvUart.RestartTime =0;
        }

        sprintf(p,"SETCTRL,%.2f,%.2f,%d,%d,%d",RecvUart.MinCurrent,RecvUart.MaxCurrent,\
                RecvUart.SetRTCTime,RecvUart.RestartFlag,RecvUart.RestartTime);


        break;

    case CMD_CTRLINFO:

        RecvUart.MinPower = ui->lineEdit_MinPower->text().toInt(&ok,10);
        RecvUart.MaxPower = ui->lineEdit_MaxPower->text().toInt(&ok,10);
        RecvUart.NowPower = ui->lineEdit_NowPower->text().toInt(&ok,10);
        RecvUart.ResidueCnt = ui->lineEdit_ResidueCnt->text().toInt(&ok,10);

        RecvUart.NowRTCTime =QDateTime::currentDateTime().toTime_t();   //将当前时间转为时间戳

        if(ui->radioButton_RestartFlag->isChecked()){
            RecvUart.RestartFlag =1;
            RecvUart.RestartTime =ui->lineEdit_MinPower->text().toInt(&ok,10);
        }
        else {
            RecvUart.RestartFlag =0;
            RecvUart.RestartTime =0;
        }
        sprintf(p,"CTRLINFO,%d,%d,%d,%d,%d,%d,%d",RecvUart.MinPower,RecvUart.MaxPower,RecvUart.NowPower,\
                RecvUart.ResidueCnt,RecvUart.NowRTCTime,RecvUart.RestartFlag,RecvUart.RestartTime);


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

}
