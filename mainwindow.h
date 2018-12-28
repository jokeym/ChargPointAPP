#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QTimer>

#define CMD_HEAD "$CHARGE"

#define DEFAULT_SET_MAX_CURRENT 5
#define DEFAULT_MAX_CURRENT 2.5

#define DEFAULT_SET_MIN_CURRENT 0.01
#define DEFAULT_MIN_CURRENT 0.04

typedef enum _CMD_TYPE_t {
    CMD_NULL=0,      //空
    CMD_UNKNOWN,   //未知指令
    CMD_OK,        //成功
    CMD_ERROR,     //错误
    CMD_CONNECT,   //连接
    CMD_GETCTRL,   //获取信息
    CMD_SETCTRL,   //设置信息
    CMD_CTRLINFO,   //设备信息
} CMD_TYPE_t;

typedef struct _RecvUart_t
{
    qint8 UartOpenFlag ;
    QString RecvStr;

    qint16 NowChannel , NowPower,MinPower,MaxPower;
    qint32 NowRTCTime,SetRTCTime;
    qint32 RestartFlag,RestartTime;
    qint16 ResidueCnt;

    qint16 year,month,day;
    qint16 hour,min,sec;

    float MaxCurrent,MinCurrent;


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

    int checksum(QString str);
    void AddChecksum(char *p);
    QString EncodMsg(CMD_TYPE_t cmd);
    CMD_TYPE_t GetCMDType(QString cmdstr);

private slots:

    void Read_Data();
    void on_pushButton_Open_clicked();
    void on_pushButton_Clean_clicked();
    void on_pushButton_Send_clicked();
    void DecodeMsg();

    void on_pushButton_GetCtrl_clicked();
    void on_pushButton_SetCtrl_clicked();

    void on_radioButton_RestartFlag_clicked();

    void updateDateSlots();

private:
    Ui::MainWindow *ui;
    QSerialPort *serial;
    QTimer *decodetimer;

     QTimer *UpdateDateTimer;

};

#endif // MAINWINDOW_H
