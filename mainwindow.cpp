#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "stdio.h"
#include "string.h"
#include <QDateTime>
#include "string.h"
#include "stdlib.h"



#define MINWIDTH  480
#define MINHEIGHT 415

RecvUart_t RecvUart;

sDevice OMJDev;

SLOCK  sOMJLock = {
    .Incount  = 785102,
    .Outcount = 953,
};

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QDesktopWidget *desktop = QApplication::desktop();
    QRect screen = desktop->screenGeometry();
    int screenWidth = screen.width();
    int screenHeight = screen.height();
    this->setMinimumWidth(MINWIDTH);
    this->setMinimumHeight(MINHEIGHT);
    QRect Qsize((screenWidth-MINWIDTH)/2,(screenHeight-MINHEIGHT)/2,MINWIDTH,MINHEIGHT);
    //    this->setGeometry(Qsize);

    tcpServer = new QTcpServer(this);
    /*获取本地IP*/
    //ui->lineEdit_TCP_Addrs->setText(QNetworkInterface().allAddresses().at(1).toString());

    ui->pushButton_TCP_Send->setEnabled(false);
    connect(tcpServer, SIGNAL(newConnection()), this, SLOT(NewConnectionSlot()));

    ui->comboBox_TCP_Type->setCurrentIndex(2);

    UDPClinet = new QUdpSocket(this);
    connect(UDPClinet, SIGNAL(readyRead()), this, SLOT(Read_Data()));


    //    on_pushButton_TCP_Open_clicked();

    ui->dateTimeEdit_KeyExpirationTime->setDateTime(QDateTime::currentDateTime().addMonths(1));
#if 0
    QList<QNetworkInterface> list = QNetworkInterface::allInterfaces();
    //获取所有网络接口的列表
    foreach(QNetworkInterface interface,list)
    {
        //硬件地址
        QList<QNetworkAddressEntry> entryList =interface.addressEntries();
        //获取IP地址条目列表，每个条目中包含一个IP地址，一个子网掩码和一个广播地址
        foreach(QNetworkAddressEntry entry,entryList)
        {//遍历每一个IP地址条目
            qDebug()<<"IP Address: "<<entry.ip().toString();

        }
    }
#endif
    //    ui->groupBox_PortInfo->hide();
    //    ui->groupBox_text->hide();
    //    ui->groupBox_Activation->hide();

    decodetimer = new QTimer(this);
    connect(decodetimer, SIGNAL(timeout()), this, SLOT(DecodeMsg()));
    decodetimer->start(100);

    UpdateDateTimer = new QTimer(this);
    connect(UpdateDateTimer, SIGNAL(timeout()), this, SLOT(updateDateSlots()));
    UpdateDateTimer->start(1000);
    //    UpdateDateTimer->stop();

    ui->tw_Lock->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tw_Lock->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tw_Lock->horizontalHeader()->setStretchLastSection(true);
    ui->tw_Lock->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeToContents);

    for(quint8 i = 0 ; i < ui->tw_Lock->rowCount();i++)
    {
        QTableWidgetItem *item_flag = new QTableWidgetItem();
        item_flag->setCheckState(Qt::Checked);
        ui->tw_Lock->setItem(i, 0, item_flag);
        item_flag = ui->tw_Lock->item(i,0);

        ui->tw_Lock->item(i,2)->setTextAlignment(Qt::AlignHCenter|Qt::AlignVCenter);

    }

    ui->tw_Gateway->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tw_Gateway->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tw_Gateway->horizontalHeader()->setStretchLastSection(true);
    ui->tw_Gateway->horizontalHeader()->setSectionResizeMode(0, QHeaderView::ResizeToContents);

    for(quint8 i = 0 ; i < ui->tw_Gateway->rowCount();i++)
    {
        QTableWidgetItem *item_flag = new QTableWidgetItem();
        item_flag->setCheckState(Qt::Checked);
        ui->tw_Gateway->setItem(i, 0, item_flag);

        QComboBox *itemComm = new QComboBox();
        itemComm->addItem("以太网");
        itemComm->addItem("WiFi");
        itemComm->addItem("GPRS");
        ui->tw_Gateway->setCellWidget(i, 1, (QWidget*)itemComm);

        QSpinBox *itemSpin = new QSpinBox();
        itemSpin->setValue(56);
        itemSpin->setMinimum(0);
        itemSpin->setMaximum(100);
        ui->tw_Gateway->setCellWidget(i,2,itemSpin);

    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Sleep(quint32 msc)
{
    QTime stime = QTime::currentTime().addMSecs(msc);

    while(QTime::currentTime()<stime);

}

// newConnection -> newConnectionSlot 新连接建立的槽函数
void MainWindow::NewConnectionSlot()
{
    currentClient = tcpServer->nextPendingConnection();
    tcpClient.append(currentClient);
    ui->comboBox_Connetion->addItem(tr("%1:%2").arg(currentClient->peerAddress().toString().split("::ffff:")[1])\
            .arg(currentClient->peerPort()));
    connect(currentClient, SIGNAL(readyRead()), this, SLOT(Read_Data()));
    connect(currentClient, SIGNAL(disconnected()), this, SLOT(disconnectedSlot()));

    RecvUart.CommonTypes |= CONNECT_TCP_SERVER;
}

void MainWindow::disconnectedSlot()
{
    //由于disconnected信号并未提供SocketDescriptor，所以需要遍历寻找
    for(int i=0; i<tcpClient.length(); i++)
    {
        if(tcpClient[i]->state() == QAbstractSocket::UnconnectedState)
        {
            // 删除存储在combox中的客户端信息
            ui->comboBox_Connetion->removeItem(ui->comboBox_Connetion->findText(tr("%1:%2")\
                                                                                .arg(tcpClient[i]->peerAddress().toString().split("::ffff:")[1])\
                                               .arg(tcpClient[i]->peerPort())));
            // 删除存储在tcpClient列表中的客户端信息
            tcpClient[i]->destroyed();
            tcpClient.removeAt(i);
        }
    }
}

void MainWindow::updateDateSlots(){

    //    QTextCursor cursor = ui->textEdit->textCursor();
    //    cursor.movePosition(QTextCursor::End);
    //    ui->textEdit->setTextCursor(cursor);

    if( ui->textEdit->document()->lineCount()>36)
        ui->textEdit->clear();
#if 0
    static quint8 sTick = 0;
    quint16 TimeOut = ui->spinBox_SendTimeout->value();


    if(!TimeOut || !ui->checkBox_AutoSend->isChecked())
        return ;

    if(++sTick>=TimeOut)
    {
        sTick = 0;
        if(ui->tabWidget->currentIndex()==4)
        {
            on_pushButton_heartbeat_clicked();
        }
        else if(ui->tabWidget->currentIndex()==5)
        {
            EncodMsg(CMD_LOCK_STATUS);
            //EncodMsg(CMD_LOCK_INFO);
        }
    }
#endif


    if(ui->tabWidget->currentIndex()!=1)
        return;

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

quint16 CountingCRC16(quint16 uiInitValue, quint8 data)
{
    return (uiInitValue << 8) ^ cuiCrc16Table[(uiInitValue >> 8)^data];
}

static quint16 checksum(unsigned char *buff, int len)
{
    quint16 uiCrcValue = INITIAL_REMAINDER;

    for (quint16 i = 0; i < len; i++)
    {
        //        qDebug("buff[%d]:%02x",i,buff[i]);
        uiCrcValue = CountingCRC16(uiCrcValue, buff[i]);
    }

    return uiCrcValue;
}


void MainWindow::Read_Data()
{

    QByteArray buffer;

    // UART
    if(RecvUart.CommonTypes & CONNECT_UART)
    {
        buffer = serial->readAll();
        if(!buffer.isEmpty())
        {
            RecvUart.RecvStr+=tr(buffer);
        }
    }
    // TCP_SERVER
    if(RecvUart.CommonTypes & CONNECT_TCP_SERVER)
    {
        // 由于readyRead信号并未提供SocketDecriptor，所以需要遍历所有客户端
        for(int i=0; i<tcpClient.length(); i++)
        {
            buffer = tcpClient[i]->readAll();
            if(buffer.isEmpty())    continue;

            static QString IP_Port, IP_Port_Pre;
            IP_Port = tr("[%1:%2]:").arg(tcpClient[i]->peerAddress().toString().split("::ffff:")[1])\
                    .arg(tcpClient[i]->peerPort());

            qDebug()<<"Socket i"<<i;
            // 若此次消息的地址与上次不同，则需显示此次消息的客户端地址
            if(IP_Port != IP_Port_Pre)
                ui->textEdit->append(IP_Port);

            ui->textEdit->append(buffer);

            RecvUart.RecvStr+=tr(buffer);
            IP_Port_Pre = IP_Port;
        }
    }
    // UDP
    if(RecvUart.CommonTypes & CONNECT_UDP)
    {
        char buf[1024] = {0};

        QHostAddress addr; //对方的ip
        quint16 port; //对方的端口
        qint64 len;

        len = UDPClinet->readDatagram(buf, sizeof(buf), &addr, &port);

        if(len>0)
        {
            QString sRevstr;
            for(int i =0;i<len;++i)
            {
                QString s;
                s.sprintf("%02x ",(quint8)buf[i]);
                sRevstr += s;
            }
            RecvUart.RecvStr=sRevstr.toUpper();

            QString TimeStr;
            QDateTime sTime;
            sTime = QDateTime::currentDateTime();
            TimeStr = sTime.toString("yyyy-MM-dd hh:mm:ss");

            QString Showstr = QString("[%1:%2] %3\n\t    %4\n").arg(addr.toString()).arg(port).arg(TimeStr).arg(sRevstr);
            ui->textEdit->append(Showstr.toUpper());

            ClientIPStr = addr.toString();
        }



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
        RecvUart.CommonTypes |= CONNECT_UART;
    }
    else{
        serial->flush();
        ui->textEdit->clear();
        serial->clear();
        serial->close();
        serial->deleteLater();
        ui->PortBox->setEnabled(true);
        ui->pushButton_Open->setText("打开");
        RecvUart.CommonTypes &=(~CONNECT_UART);
    }


}

void MainWindow::on_pushButton_Clean_clicked()
{

    ui->textEdit->clear();
}

CMD_TYPE_t MainWindow::GetCMDType(QString cmdstr){
    CMD_TYPE_t cmd = CMD_UNKNOWN;

    return cmd;
}

void MainWindow::on_pushButton_Send_clicked()
{
    if(RecvUart.CommonTypes & CONNECT_UART)
    {
        qDebug()<<"Uart Send:"<<ui->lineEdit->text();
        RecvUart.RecvStr.clear();
        serial->write(ui->lineEdit->text().toLatin1());
    }
    else
    {
        ui->textEdit->append("串口未打开");
        ui->statusBar->showMessage("串口未打开",3000);
    }

}

QString MainWindow::GetMsgStr(QStringList list, quint8 start, quint8 end)
{
    QString str ;

    for(quint8 i = start;i<end;i++)
        str+=list.at(i);

    return str;
}

void MainWindow::DecodeMsg(){
    QString str = RecvUart.RecvStr;
    bool ok;
    quint8 point = 0;
    quint16 Cmd= 0, CmdLen = 0;

    if(!str.isEmpty()){
        RecvUart.RecvStr.clear();
        qDebug()<<"Recv"<<str;

        QStringList list = str.split(QRegExp("[ ]"));

        if(GetMsgStr(list,point,2)!="3AA3") return ;
        point+=2;

        if(GetMsgStr(list,point,point+4)!="00000001") return ;
        point+=4;

        //        if(GetMsgStr(list,point,point+8)!=ui->lineEdit_15->text())  return ;
        point+=8;

        CmdLen = GetMsgStr(list,point,point+2).toInt();
        point+=2;


        Cmd = GetMsgStr(list,point,point+2).toInt(&ok,16);
        point+=2;

        qDebug("Recv  Cmd:%04x",Cmd);

        switch(Cmd)
        {


        case 0x0901:
            if(list.at(point)=="00")
            {
                OMJDev.Login = 1;
                ui->statusBar->showMessage("登录成功",1000);
            }
            break;
        case 0x0902:
            if(list.at(point)=="01")
            {
                point+=1;

                OMJDev.ServerTime.year = GetMsgStr(list,point,point+2).toInt(&ok,16);
                point+=2;

                OMJDev.ServerTime.month = GetMsgStr(list,point,point+1).toInt(&ok,16);
                point+=1;

                OMJDev.ServerTime.date = GetMsgStr(list,point,point+1).toInt(&ok,16);
                point+=1;

                OMJDev.ServerTime.hour = GetMsgStr(list,point,point+1).toInt(&ok,16);
                point+=1;

                OMJDev.ServerTime.min = GetMsgStr(list,point,point+1).toInt(&ok,16);
                point+=1;

                OMJDev.ServerTime.sec = GetMsgStr(list,point,point+1).toInt(&ok,16);
                point+=1;

                QString sServerTimeStr = QString("%1-%2-%3 %4:%5:%6").arg(OMJDev.ServerTime.year).arg(OMJDev.ServerTime.month).arg(OMJDev.ServerTime.date).arg(OMJDev.ServerTime.hour).arg(OMJDev.ServerTime.min).arg(OMJDev.ServerTime.sec);
                ui->statusBar->showMessage("服务器推送时间:  "+sServerTimeStr , 3000);

            }
            break;

        case CMDID_DevSN:
            ui->lineEdit_DevID->setText(GetMsgStr(list,point,point+2));
            point+=2;

            ui->lineEdit_DevSN->setText(GetMsgStr(list,point,point+8));
            break;

        case CMDID_ZigbeeParam:
            ui->lineEdit_PanID->setText(QString::number(GetMsgStr(list,point,point+2).toInt(&ok,16),10));
            point+=2;

            ui->lineEdit_Myaddr->setText(QString::number(GetMsgStr(list,point,point+2).toInt(&ok,16),10));
            point+=2;

            ui->lineEdit_TargetAddr->setText(QString::number(GetMsgStr(list,point,point+2).toInt(&ok,16),10));
            point+=2;

            ui->lineEdit_ModuleType->setText(QString::number(GetMsgStr(list,point,point+1).toInt(&ok,16),10));
            point+=1;

            ui->lineEdit_SendPower->setText(QString::number(GetMsgStr(list,point,point+1).toInt(&ok,16),10));
            point+=1;

            ui->lineEdit_SendRetryCount->setText(QString::number(GetMsgStr(list,point,point+1).toInt(&ok,16),10));
            point+=1;

            ui->spinBox_Chan->setValue(GetMsgStr(list,point,point+1).toInt(&ok,16));
            point+=1;

            ui->lineEdit_RetryTimeout->setText(QString::number(GetMsgStr(list,point,point+1).toInt(&ok,16),10));
            point+=1;

            break;

        case CMDID_LanIp:
            QString IP;

            IP += QString::number(GetMsgStr(list,point,point+1).toInt(&ok,16),10)+".";
            point+=1;

            IP += QString::number(GetMsgStr(list,point,point+1).toInt(&ok,16),10)+".";
            point+=1;

            IP += QString::number(GetMsgStr(list,point,point+1).toInt(&ok,16),10)+".";
            point+=1;

            IP += QString::number(GetMsgStr(list,point,point+1).toInt(&ok,16),10);
            point+=1;

            ui->lineEdit_ServerIP->setText(IP);

            break;

        }






    }

}

quint16 AddNewCommandByte(quint8 data, quint8* buffer)
{
    buffer[0] = data;
    return 1;
}

quint16 AddNewCommandInt16(quint16 data, quint8* buffer)
{
    buffer[0] = (quint8)(data>>8);
    buffer[1] = (quint8)data;
    return 2;
}

quint16 AddNewCommandInt24(quint32 data, quint8* buffer)
{
    buffer[0] = (quint8)(data>>16);
    buffer[1] = (quint8)(data>>8);
    buffer[2] = (quint8)data;
    return 3;
}


quint16 AddNewCommandInt32(quint32 data, quint8* buffer)
{
    buffer[0] = (quint8)(data>>24);
    buffer[1] = (quint8)(data>>16);
    buffer[2] = (quint8)(data>>8);
    buffer[3] = (quint8)data;
    return 4;
}

void MainWindow::OMJParaSet()
{
    static quint8 row= 0,row2 = 0;
    if(ui->radioButton_Net->isChecked())
        OMJDev.OMJCommon = COMM_NET;
    else if(ui->radioButton_WiFi->isChecked())
        OMJDev.OMJCommon = COMM_WIFI;
    else if(ui->radioButton_GPRS->isChecked())
        OMJDev.OMJCommon = COMM_GPRS;

    if(ui->tabWidget->currentIndex()==4)
    {
        for(quint8 i =row;i<ui->tw_Gateway->rowCount();i++)
        {
            row++;
            if(row>ui->tw_Gateway->rowCount()-1)
                row = 0;
            if(ui->tw_Gateway->item(i,0)->checkState()==Qt::Checked)
            {
                if(!ui->tw_Gateway->item(i,4)->text().isEmpty())
                {
                    OMJDev.SNStr = ui->tw_Gateway->item(i,4)->text();
                    break;
                }
            }
        }
    }
    else if(ui->tabWidget->currentIndex()==5)
    {
        for(quint8 i =row2;i<ui->tw_Lock->rowCount();i++)
        {
            row2++;
            if(row2>ui->tw_Lock->rowCount()-1)
                row2 = 0;
            if(ui->tw_Lock->item(i,0)->checkState()==Qt::Checked)
            {
                if(!ui->tw_Lock->item(i,2)->text().isEmpty())
                {
                    OMJDev.SNStr = ui->tw_Lock->item(i,2)->text();
                    break;
                }
            }
        }
    }


}
//09 02 00 01 00 00 30 00 08 00 00 02 00 00 00 00 00
QString LoginStr = "3AA3000000012019031517351536002D090152000001180A010000012019031517351536FFFFFFFFFFFF310602030484121314151617191A1B20211C00428B";
//真实门禁  3AA300000001 2019031314130001 000F 0A69 00000006 00000005 00 01 01 0000 643E
//虚拟门禁  3AA300000001 2019031314130001 0000 0A69 000BFACE 000003B9 00 00 00 0000 AFFA
QString MainWindow::EncodMsg(CMD_TYPE_t cmd){

    QString sMsg = NULL,str = NULL ,datastr = NULL;
    quint16 dataLen = 0,Framelen = 0,CheckSum = 0;
    QString devStr;
    bool ok;
    OMJParaSet();

    str += QString::number(COMMANDSYNTEX,16);

    str += QString("%1").arg(0x00,6,16,QLatin1Char('0'));

    str += QString("%1").arg(COMM_PROTOCOL_VER,2,16,QLatin1Char('0'));

    if(COMMANDSYNTEX==0x01)
    {
        OMJDev.SNStr = ui->lineEdit_DevSN->text();
        str += OMJDev.SNStr;
    }

    datastr += QString("%1").arg(cmd,4,16,QLatin1Char('0'));

    switch(cmd)
    {
    case CMDID_GetLanIp:
        break;
    case CMDID_GetZigbeeParam:
        break;
    case CMDID_GetDevSN:
        break;

    case 0x0901:
        datastr += QString::number(DEV_TYPES,16);

        datastr += QString::number(culDeviceVersion,16);

        datastr += QString("%1").arg(uiDeviceID,4,16,QLatin1Char('0'));

        datastr += OMJDev.SNStr;

        datastr += "FFFFFFFFFFFF";

        datastr += "310602030484121314151617191A1B20211C00";

        break;

    case 0x0902:
        //
        datastr += QString("%1").arg(uiDeviceID,4,16,QLatin1Char('0'));
        // 门状态和当前状态
        datastr += QString("%1").arg(0x00,4,16,QLatin1Char('0'));
        // 数据类型
        datastr += QString("%1").arg(0x30,2,16,QLatin1Char('0'));

        // 数据长度
        datastr += QString("%1").arg(8,4,16,QLatin1Char('0'));

        // 供电方式
        datastr += QString("%1").arg(0,2,16,QLatin1Char('0'));

        // 电量
        datastr += QString("%1").arg(OMJDev.vabt,2,16,QLatin1Char('0'));

        // 通信信道 0x00：有线网络通信 0x01：WIFI通信  0x02：GPRS通信
        datastr += QString("%1").arg(OMJDev.OMJCommon,2,16,QLatin1Char('0'));

        // 设备工作状态
        datastr += QString("%1").arg(0x00,2,16,QLatin1Char('0'));

        // 预留
        datastr += QString("%1").arg(0,8,16,QLatin1Char('0'));

        break;

    case 0X0A69:
        datastr += QString("%1").arg(sOMJLock.Incount,8,16,QLatin1Char('0'));
        datastr += QString("%1").arg(sOMJLock.Outcount,8,16,QLatin1Char('0'));

        datastr += QString("%1").arg(0x00,2,16,QLatin1Char('0'));

        datastr += QString("%1").arg(0x00,2,16,QLatin1Char('0'));

        datastr += QString("%1").arg(0x00,2,16,QLatin1Char('0'));

        datastr += QString("%1").arg(0x00,4,16,QLatin1Char('0'));
        break;

    case 0x0F01:
        datastr += QString("%1").arg(LOCK_TYPES,8,16,QLatin1Char('0'));
        datastr += QString("%1").arg(LOCK_VER,8,16,QLatin1Char('0'));
        break;

    case CMDID_SetZigbeeParam:
        datastr += QString("%1").arg(ui->lineEdit_PanID->text().toInt(&ok,10),4,16,QLatin1Char('0'));
        datastr += QString("%1").arg(ui->lineEdit_Myaddr->text().toInt(&ok,10),4,16,QLatin1Char('0'));
        datastr += QString("%1").arg(ui->lineEdit_TargetAddr->text().toInt(&ok,10),4,16,QLatin1Char('0'));
        datastr += QString("%1").arg(ui->lineEdit_ModuleType->text().toInt(&ok,10),2,16,QLatin1Char('0'));
        datastr += QString("%1").arg(ui->lineEdit_SendPower->text().toInt(&ok,10),2,16,QLatin1Char('0'));
        datastr += QString("%1").arg(ui->lineEdit_SendRetryCount->text().toInt(&ok,10),2,16,QLatin1Char('0'));
        datastr += QString("%1").arg(ui->spinBox_Chan->value(),2,16,QLatin1Char('0'));
        datastr += QString("%1").arg(ui->lineEdit_RetryTimeout->text().toInt(&ok,10),2,16,QLatin1Char('0'));
        break;

    case CMDID_SetDevSN:
        devStr = ui->lineEdit_DevID->text();
        if(devStr.length()>4)
        {
            ui->statusBar->showMessage("设备地址输入错误，重新检测输入",3000);
            return NULL;
        }
        datastr += QString("%1").arg(devStr,4,QLatin1Char('0'));

        devStr = ui->lineEdit_DevSN->text();
        if(devStr.length()!=16)
        {
            ui->statusBar->showMessage("序列号输入错误，重新输入16位序列号",3000);
            return NULL;
        }
        datastr += devStr;
        break;

    case CMDID_SetLanIp:
    {
        quint8 uiIP[4];
        quint32 sSetIP;
        QString SetServerIP = ui->lineEdit_ServerIP->text();
        QStringList listIp = SetServerIP.split(QRegExp("[.]"));

        for(quint8 i = 0;i<4;i++)
        {
            uiIP[i] = listIp.at(i).toInt();
            qDebug()<<"uiIP"<<uiIP[i];
        }

        sSetIP = uiIP[0]<<24 | uiIP[1]<<16 |uiIP[2]<<8 |uiIP[3];

        datastr += QString("%1").arg(sSetIP,8,16,QLatin1Char('0'));

        qDebug()<<"SetServerIP"<<SetServerIP;
    }
        break;


    }
    dataLen = datastr.length()/2;
    str += QString("%1").arg(dataLen,4,16,QLatin1Char('0'));


    sMsg.append(str);
    sMsg.append(datastr);

    str.clear();
    datastr.clear();

    Framelen = sMsg.length()/2;
    QByteArray  data = QByteArray::fromHex(sMsg.toLatin1());
    CheckSum = checksum((unsigned char *)data.data(),Framelen);

    str += QString("%1").arg(CheckSum,4,16,QLatin1Char('0'));
    sMsg.append(str);

    qDebug()<<"Encode sMsg:"<<sMsg.toUpper();


    ui->lineEdit->setText(sMsg.toUpper());

    if(RecvUart.CommonTypes & CONNECT_UART)
        on_pushButton_Send_clicked();
    if(RecvUart.CommonTypes & CONNECT_TCP_SERVER)
        on_pushButton_TCP_Send_clicked();
    if(RecvUart.CommonTypes & CONNECT_UDP)
        UDPSendData();

    return 0;

}

// 通用密码和CRC计算数据
static const unsigned char crc_tmp_data[128] = {
    //     0    1     2     3      4     5     6    7      8    9     A     B      C     D     E     F
    /*0*/ 0x40, 0xa8, 0xb5, 0x5a, 0xdd, 0x21, 0xff, 0xee, 0x62, 0x56, 0xf2, 0x14, 0x66, 0x7c, 0x44, 0x5f,\
    /*1*/ 0x85, 0x9b, 0x21, 0x32, 0x42, 0x55, 0x67, 0x76, 0xea, 0x68, 0xf0, 0x89, 0xfe, 0xef, 0x2c, 0xcd,\
    /*2*/ 0x45, 0x2c, 0x44, 0x94, 0x44, 0x53, 0xc6, 0x22, 0x00, 0x63, 0x00, 0xdb, 0xca, 0x3a, 0xce, 0x2b,\
    /*3*/ 0x31, 0xdd, 0x37, 0x50, 0x5f, 0x44, 0xf7, 0x66, 0x34, 0x61, 0x20, 0x01, 0xc3, 0x67, 0x34, 0x25,\
    /*4*/ 0xa4, 0xfb, 0x89, 0xcc, 0xf7, 0xff, 0xcc, 0x8d, 0x33, 0x00, 0x23, 0xf0, 0xd7, 0x66, 0x35, 0xb4,\
    /*5*/ 0x55, 0x2a, 0x9f, 0x60, 0xdf, 0xf7, 0xdf, 0xfe, 0xfe, 0x66, 0x2a, 0xcf, 0xbb, 0x3a, 0x43, 0x75,\
    /*6*/ 0x87, 0xa9, 0xce, 0x70, 0xdc, 0x2d, 0xfe, 0x6e, 0x2c, 0xa1, 0x30, 0x20, 0x50, 0x25, 0x76, 0x4a,\
    /*7*/ 0x46, 0x5f, 0x86, 0x80, 0x28, 0x61, 0x22, 0x23, 0x6c, 0x2b, 0x4c, 0x55, 0x2c, 0x33, 0x00, 0x4b,\
};

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

    if(ui->checkBox_KMS->isChecked()){
        sExpirateTime = sCreateTime - 8888;
    }
    else {
        sExpirateTime = ui->dateTimeEdit_KeyExpirationTime->dateTime().toTime_t();
        if(sCreateTime > sExpirateTime){
            ui->statusBar->showMessage("设备到期时间设置出错",3000);
            return 0;
        }
    }

    qDebug()<<"sCreateTime"<<sCreateTime;
    qDebug()<<"sExpirateTime"<<sExpirateTime;

    key[2] = UID[2] ^ sCreateTime;
    key[0] = UID[1] ^ sExpirateTime;
    key[1] = UID[0] ^ sExpirateTime;


    if ((key[0] ^ UID[1]) != (key[1] ^ UID[0])){
        qDebug()<<"校验错误";
        return -1;
    }

    for (uint8_t i = 0; i < 12; i++)
    {
        uckey[i] = uckey[i] ^ crc_tmp_data[ucUID[i] >> 1];
    }

    EncodeKeyString(uckey);


}

void MainWindow::on_pushButton_CreateKey_clicked()
{
    if(ui->lineEdit_UUID->text().isEmpty()){
        ui->statusBar->showMessage("请先获取设备的UUID",3000);
        return ;
    }

    EncodeActivekey();
}



void MainWindow::on_checkBox_KMS_stateChanged(int arg1)
{
    if(ui->checkBox_KMS->isChecked()){
        ui->dateTimeEdit_KeyExpirationTime->setEnabled(false);
    }
    else{
        ui->dateTimeEdit_KeyExpirationTime->setEnabled(true);

    }
}

void MainWindow::on_pushButton_TCP_Open_clicked()
{
    // tcp server
    if(ui->comboBox_TCP_Type->currentIndex()==0)
    {
        if(ui->pushButton_TCP_Open->text()=="监听")
        {
            bool ok = tcpServer->listen(QHostAddress::Any, ui->lineEdit_TCP_Port->text().toInt());
            if(ok)
            {
                ui->pushButton_TCP_Open->setText("断开");
                ui->pushButton_TCP_Send->setEnabled(true);
            }
        }
        else
        {

            qDebug()<<"currentIndex"<<ui->comboBox_Connetion->currentIndex();
            if(ui->comboBox_Connetion->currentIndex()==0)
            {
                for(int i=0; i<tcpClient.length(); i++)//断开所有连接
                {

                    tcpClient[i]->disconnectFromHost();
                    if (tcpClient[i]->state() == QAbstractSocket::UnconnectedState ||
                            tcpClient[i]->waitForDisconnected(1000))
                    {
                        // 删除存储在tcpClient列表中的客户端信息
                        tcpClient[i]->destroyed();
                        tcpClient.removeAt(i);
                    }
                    qDebug()<<"i:"<<i<<"len:"<<tcpClient.length();
                    // 删除存储在combox中的客户端信息
                    ui->comboBox_Connetion->removeItem(i+1);
                }
                Sleep(1000);

                tcpClient[0]->disconnectFromHost();
                if(tcpClient[0]->waitForDisconnected(1000))
                {
                    tcpClient[0]->destroyed();
                    tcpClient.removeAt(0);
                    qDebug()<<"close";
                }

                tcpServer->close();     //不再监听端口
                ui->pushButton_TCP_Open->setText("监听");
                ui->pushButton_TCP_Send->setEnabled(false);
            }
            else
            {
                int num=ui->comboBox_Connetion->currentIndex()-1;
                tcpClient[num]->disconnectFromHost();
                qDebug()<<"num"<<num;
                if (tcpClient[num]->state() == QAbstractSocket::UnconnectedState ||
                        tcpClient[num]->waitForDisconnected(1000))
                {
                    // 删除存储在combox中的客户端信息
                    ui->comboBox_Connetion->removeItem(ui->comboBox_Connetion->findText(tr("%1:%2")\
                                                                                        .arg(tcpClient[num]->peerAddress().toString().split("::ffff:")[1])\
                                                       .arg(tcpClient[num]->peerPort())));
                    // 删除存储在tcpClient列表中的客户端信息
                    tcpClient[num]->destroyed();
                    tcpClient.removeAt(num);
                }

            }
        }

    }

    //udp
    if(ui->comboBox_TCP_Type->currentIndex()==2)
    {


        QString  strip = ui->lineEdit_TCP_Addrs->text();
        quint16 serverport =ui->lineEdit_TCP_Port->text().toInt();

        UDPClinet->bind(QHostAddress(strip),serverport);

        RecvUart.CommonTypes |= CONNECT_UDP;

        qDebug()<<strip<<serverport;

        if(ui->pushButton_TCP_Open->text()=="监听")
        {
            ui->pushButton_TCP_Open->setText("断开");
        }
    }

}

void MainWindow::on_pushButton_TCP_Send_clicked()
{
    QString data = ui->lineEdit->text()+"\n";

    if(data.isEmpty())
        return;
    //全部连接
    if(ui->comboBox_Connetion->currentIndex() == 0)
    {
        for(int i=0; i<tcpClient.length(); i++)
            tcpClient[i]->write(data.toLatin1());
    }
    //指定连接
    else
    {
        QString clientIP = ui->comboBox_Connetion->currentText().split(":")[0];
        int clientPort = ui->comboBox_Connetion->currentText().split(":")[1].toInt();


        for(int i=0; i<tcpClient.length(); i++)
        {
            if(tcpClient[i]->peerAddress().toString().split("::ffff:")[1]==clientIP \
                    && tcpClient[i]->peerPort()==clientPort)
            {
                tcpClient[i]->write(data.toLatin1());
                return; //ip:port唯一，无需继续检索
            }
        }
    }
}

// UDP
void MainWindow::UDPSendData()
{
    QString ip = ClientIPStr;
    quint16 port = ui->lineEdit_TCP_Port->text().toInt();

    QString str = ui->lineEdit->text().toUpper();

    QByteArray  data = QByteArray::fromHex(str.toLatin1());

    UDPClinet->writeDatagram(data, (QHostAddress)ip, port);

    qDebug()<<"ClientIPStr"<<ClientIPStr;
    qDebug()<<"UDP Send Data:"<<str;
}

void MainWindow::on_pushButton_clicked()
{
    EncodMsg(CMDID_Login);
}


void MainWindow::on_pushButton_heartbeat_clicked()
{
    EncodMsg(CMDID_SendPlusData);
}



void MainWindow::on_pushButton_GetSN_clicked()
{
    if(ui->radioButton_Dev->isChecked())
        EncodMsg(CMDID_GetDevSN);
    else if(ui->radioButton_Zigbee->isChecked())
        EncodMsg(CMDID_GetZigbeeParam);
    else if(ui->radioButton_ServerIp->isChecked())
        EncodMsg(CMDID_GetLanIp);


}


void MainWindow::on_pushButton_SetSN_clicked()
{
     if(ui->radioButton_Dev->isChecked())
        EncodMsg(CMDID_SetDevSN);
     else if(ui->radioButton_Zigbee->isChecked())
        EncodMsg(CMDID_SetZigbeeParam);
     else if(ui->radioButton_ServerIp->isChecked())
         EncodMsg(CMDID_SetLanIp);
}
