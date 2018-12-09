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
    }
    else{
        serial->clear();
        serial->close();
        serial->deleteLater();
        ui->PortBox->setEnabled(true);
        ui->pushButton_Open->setText("打开");
    }


}

void MainWindow::on_pushButton_Clean_clicked()
{
    ui->textEdit->clear();

}

CMD_TYPE_t MainWindow::GetCMDType(QString cmdstr){
    CMD_TYPE_t cmd = CMD_UNKNOWN;

    qDebug()<<"cmd:"<<cmdstr;
    if(cmdstr=="DEVINFO")
        cmd = CMD_DEVINFO;
    else if(cmdstr=="SETCTRL")
        cmd = CMD_DEVINFO;

    return cmd;
}

void MainWindow::on_pushButton_Send_clicked()
{
    RecvUart.RecvStr.clear();
    qDebug()<<"启动定时器";
    decodetimer->start(100);
    serial->write((ui->lineEdit->text()).toLatin1());
}

void MainWindow::DecodeMsg(){
    QString str = RecvUart.RecvStr;
    CMD_TYPE_t cmd = CMD_NULL;
    bool ok;
    if(!str.isEmpty()){
        ui->textEdit->append(str);

        RecvUart.RecvStr.clear();
        decodetimer->stop();

        QStringList list = str.split(QRegExp("[,*]"));
        for(quint8 i = 0 ; i<list.size();i++)
            qDebug()<<list.at(i);

        if(list.at(0)!=CMD_HEAD){
            qDebug()<<"数据出错";
        }
        cmd = GetCMDType(list.at(1));
        switch(cmd){
            case CMD_DEVINFO:
            qDebug()<<"CMD_SETCTRL";
//            RecvUart.MinPower = list.at(2).toInt(&ok,10);
//            RecvUart.MaxPower = list.at(3).toInt(&ok,10);
//            RecvUart.NowPower = list.at(4).toInt(&ok,10);
//            RecvUart.ResidueCnt =list.at(5).toInt(&ok,10);
//            RecvUart.NowRTCTime =list.at(6).toInt(&ok,10);
//            RecvUart.RestartFlag =list.at(7).toInt(&ok,10);
//            RecvUart.RestartTime =list.at(8).toInt(&ok,10);

            ui->lineEdit_MinPower->setText(list.at(2));
            ui->lineEdit_MaxPower->setText(list.at(3));
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
            break;
        }


    }

}

QString MainWindow::EncodMsg(CMD_TYPE_t cmd){
    static char sMessage[256] = {0};
    char *p = sMessage;
    bool ok=true;

    strcpy(p, "$ICEGPS,");
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
        RecvUart.MinPower = ui->lineEdit_MinPower->text().toInt(&ok,10);
        RecvUart.MaxPower = ui->lineEdit_MaxPower->text().toInt(&ok,10);
        RecvUart.NowPower = ui->lineEdit_NowPower->text().toInt(&ok,10);
        RecvUart.ResidueCnt =ui->lineEdit_ResidueCnt->text().toInt(&ok,10);

        QDateTime time = QDateTime::currentDateTime();   //获取当前时间
        RecvUart.SetRTCTime =time.toTime_t();   //将当前时间转为时间戳

        if(ui->radioButton_RestartFlag->isChecked()){
            RecvUart.RestartFlag =1;
            RecvUart.RestartTime =ui->lineEdit_MinPower->text().toInt(&ok,10);
        }
        else {
            RecvUart.RestartFlag =0;
            RecvUart.RestartTime =0;
        }

        sprintf(p,"SETCTRL,%d,%d,%d,%d,%d,%d,%d",RecvUart.MinPower,RecvUart.MaxPower,\
                RecvUart.NowPower,RecvUart.ResidueCnt,RecvUart.SetRTCTime,\
                RecvUart.RestartFlag,RecvUart.RestartTime);
        break;


    }

    AddChecksum(sMessage);

    return sMessage;

}

void MainWindow::on_pushButton_Connect_clicked()
{
    ui->lineEdit->setText(EncodMsg(CMD_CONNECT));
}

void MainWindow::on_pushButton_GetCtrl_clicked()
{
    ui->lineEdit->setText(EncodMsg(CMD_GETCTRL));
}

void MainWindow::on_pushButton_SetCtrl_clicked()
{
    ui->lineEdit->setText(EncodMsg(CMD_SETCTRL));
}
