#include "mainwindow.h"
#include "ui_mainwindow.h"

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

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Read_Data()
{
    QByteArray buf;
    buf = serial->readAll();
    if(!buf.isEmpty())
    {
        QString str = ui->textEdit->toPlainText();
        str+=tr(buf);
        ui->textEdit->clear();
        ui->textEdit->append(str);
//        qDebug()<<buf;
    }
    buf.clear();
}

void MainWindow::on_pushButton_Open_clicked()
{

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



}

void MainWindow::on_pushButton_Clean_clicked()
{
    ui->textEdit->clear();

}

void MainWindow::on_pushButton_Send_clicked()
{
    serial->write(ui->lineEdit->text().toLatin1());
}
