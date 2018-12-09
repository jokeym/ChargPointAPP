#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QTimer>

#define CMD_HEAD "$ICEGPS"

typedef enum _CMD_TYPE_t {
    CMD_NULL,      //空
    CMD_UNKNOWN,   //未知指令
    CMD_OK,        //成功
    CMD_ERROR,     //错误
    CMD_CONNECT,   //连接
    CMD_GETCTRL,   //获取信息
    CMD_SETCTRL,   //设置信息
    CMD_DEVINFO,   //设备信息
} CMD_TYPE_t;

typedef struct _RecvUart_t
{
    QString RecvStr;

    qint16 NowPower,MinPower,MaxPower;
    qint32 NowRTCTime,SetRTCTime;
    qint32 RestartFlag,RestartTime;
    qint16 ResidueCnt;

}RecvUart_t;


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


    void AddChecksum(char *p);
    QString EncodMsg(CMD_TYPE_t cmd);
    CMD_TYPE_t GetCMDType(QString cmdstr);

private slots:

    void Read_Data();
    void on_pushButton_Open_clicked();
    void on_pushButton_Clean_clicked();
    void on_pushButton_Send_clicked();
    void DecodeMsg();


    void on_pushButton_Connect_clicked();

    void on_pushButton_GetCtrl_clicked();

    void on_pushButton_SetCtrl_clicked();

private:
    Ui::MainWindow *ui;
    QSerialPort *serial;
    QTimer *decodetimer;

};

#endif // MAINWINDOW_H
