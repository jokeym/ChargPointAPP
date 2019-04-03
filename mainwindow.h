#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDesktopWidget>
#include <QMainWindow>
#include <QDebug>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QTimer>

#include <QTcpServer>
#include <QTcpSocket>
#include <QNetworkInterface>
#include <QMessageBox>
#include <QUdpSocket>
#include <QComboBox>

//通信协议
#define MAX_COM_FALME_LENGHT    1100        // 数据帧的最大长度
#define INITIAL_REMAINDER       0xA1EC      // CRC初始值

#define COMMANDSYNTEX           0x3AA3
#define COMM_PROTOCOL_VER       0x10        //0x01        // 通信协议版本
#define COMM_RES                0x000000    // 保留字节
#define DEV_TYPES               0x52000001  // 设备类型
#define culDeviceVersion        0x180A0100
#define uiDeviceID              0x0001     // 设备地址

#define LOCK_TYPES              0x52000012  // 设备类型
#define LOCK_VER                0x04090000

typedef enum _CMD_TYPE_t {
    CMD_NULL=0,      //空
    CMD_UNKNOWN,   //未知指令
    CMD_OK,        //成功
    CMD_ERROR,     //错误
    CMD_CONNECT,   //连接


    CMDID_GetDevSN          = 0x8001,   // 读设备地址，序列号
    CMDID_DevSN             = 0x8002,   // 设备地址，序列号
    CMDID_SetDevSN          = 0x8081,   // 设置设备地址，序列号

    CMDID_GetLanIp          = 0x8082,   // 读LAN网络IP
    CMDID_LanIp             = 0x8083,   // LAN网络IP
    CMDID_SetLanIp          = 0x8084,   // 设置LAN网络IP

    CMDID_Login             = 0x0901,   // 设备登录
    CMDID_SendPlusData      = 0x0902,   // 实时主动上传心跳数据
    CMDID_SendRecordData    = 0x0903,   // 实时主动上传记录数据
    CMDID_GetZigbeeParam    = 0x010C,   // 获取ZigBee参数
    CMDID_ZigbeeParam       = 0x010C,   // 返回ZigBee参数
    CMDID_SetZigbeeParam    = 0x018C,   // 设置ZigBee参数

    CMD_LOCK_STATUS=0X0A69,
    CMD_LOCK_INFO = 0X0F01,


} CMD_TYPE_t;

typedef enum _eCONNECT_TYPE{
    NOCONNECT           = 0,
    CONNECT_UART        = 1<<1,
    CONNECT_TCP_SERVER  = 1<<2,
    CONNECT_TCP_CLIENT  = 1<<3,
    CONNECT_UDP         = 1<<4,
}CONNECT_TYPE;

typedef struct _RecvUart_t
{
    quint8 CommonTypes ;
    QString RecvStr;

    QString UIDStr;

}RecvUart_t;

#define KEY_POS_0 11
#define KEY_POS_1 1
#define KEY_POS_2 6
#define KEY_POS_3 8
#define KEY_POS_4 4
#define KEY_POS_5 5
#define KEY_POS_6 2
#define KEY_POS_7 9
#define KEY_POS_8 7
#define KEY_POS_9 3
#define KEY_POS_10 10
#define KEY_POS_11 0

// CRC counting table
// 公式为 0x1021
const uint16_t cuiCrc16Table[256] =
{
    0x0000, 0x1021, 0x2042, 0x3063, 0x4084, 0x50a5, 0x60c6, 0x70e7,
    0x8108, 0x9129, 0xa14a, 0xb16b, 0xc18c, 0xd1ad, 0xe1ce, 0xf1ef,
    0x1231, 0x0210, 0x3273, 0x2252, 0x52b5, 0x4294, 0x72f7, 0x62d6,
    0x9339, 0x8318, 0xb37b, 0xa35a, 0xd3bd, 0xc39c, 0xf3ff, 0xe3de,
    0x2462, 0x3443, 0x0420, 0x1401, 0x64e6, 0x74c7, 0x44a4, 0x5485,
    0xa56a, 0xb54b, 0x8528, 0x9509, 0xe5ee, 0xf5cf, 0xc5ac, 0xd58d,
    0x3653, 0x2672, 0x1611, 0x0630, 0x76d7, 0x66f6, 0x5695, 0x46b4,
    0xb75b, 0xa77a, 0x9719, 0x8738, 0xf7df, 0xe7fe, 0xd79d, 0xc7bc,
    0x48c4, 0x58e5, 0x6886, 0x78a7, 0x0840, 0x1861, 0x2802, 0x3823,
    0xc9cc, 0xd9ed, 0xe98e, 0xf9af, 0x8948, 0x9969, 0xa90a, 0xb92b,
    0x5af5, 0x4ad4, 0x7ab7, 0x6a96, 0x1a71, 0x0a50, 0x3a33, 0x2a12,
    0xdbfd, 0xcbdc, 0xfbbf, 0xeb9e, 0x9b79, 0x8b58, 0xbb3b, 0xab1a,
    0x6ca6, 0x7c87, 0x4ce4, 0x5cc5, 0x2c22, 0x3c03, 0x0c60, 0x1c41,
    0xedae, 0xfd8f, 0xcdec, 0xddcd, 0xad2a, 0xbd0b, 0x8d68, 0x9d49,
    0x7e97, 0x6eb6, 0x5ed5, 0x4ef4, 0x3e13, 0x2e32, 0x1e51, 0x0e70,
    0xff9f, 0xefbe, 0xdfdd, 0xcffc, 0xbf1b, 0xaf3a, 0x9f59, 0x8f78,
    0x9188, 0x81a9, 0xb1ca, 0xa1eb, 0xd10c, 0xc12d, 0xf14e, 0xe16f,
    0x1080, 0x00a1, 0x30c2, 0x20e3, 0x5004, 0x4025, 0x7046, 0x6067,
    0x83b9, 0x9398, 0xa3fb, 0xb3da, 0xc33d, 0xd31c, 0xe37f, 0xf35e,
    0x02b1, 0x1290, 0x22f3, 0x32d2, 0x4235, 0x5214, 0x6277, 0x7256,
    0xb5ea, 0xa5cb, 0x95a8, 0x8589, 0xf56e, 0xe54f, 0xd52c, 0xc50d,
    0x34e2, 0x24c3, 0x14a0, 0x0481, 0x7466, 0x6447, 0x5424, 0x4405,
    0xa7db, 0xb7fa, 0x8799, 0x97b8, 0xe75f, 0xf77e, 0xc71d, 0xd73c,
    0x26d3, 0x36f2, 0x0691, 0x16b0, 0x6657, 0x7676, 0x4615, 0x5634,
    0xd94c, 0xc96d, 0xf90e, 0xe92f, 0x99c8, 0x89e9, 0xb98a, 0xa9ab,
    0x5844, 0x4865, 0x7806, 0x6827, 0x18c0, 0x08e1, 0x3882, 0x28a3,
    0xcb7d, 0xdb5c, 0xeb3f, 0xfb1e, 0x8bf9, 0x9bd8, 0xabbb, 0xbb9a,
    0x4a75, 0x5a54, 0x6a37, 0x7a16, 0x0af1, 0x1ad0, 0x2ab3, 0x3a92,
    0xfd2e, 0xed0f, 0xdd6c, 0xcd4d, 0xbdaa, 0xad8b, 0x9de8, 0x8dc9,
    0x7c26, 0x6c07, 0x5c64, 0x4c45, 0x3ca2, 0x2c83, 0x1ce0, 0x0cc1,
    0xef1f, 0xff3e, 0xcf5d, 0xdf7c, 0xaf9b, 0xbfba, 0x8fd9, 0x9ff8,
    0x6e17, 0x7e36, 0x4e55, 0x5e74, 0x2e93, 0x3eb2, 0x0ed1, 0x1ef0
};


typedef enum _OMJ_COMM{
    COMM_NET = 0,
    COMM_WIFI,
    COMM_GPRS,

}OMJ_COMM;

typedef struct _ServerTime{
    quint16 year;
    quint8  month;
    quint8  date;
    quint8  hour;
    quint8  min;
    quint8  sec;

}SEVERTIME;

typedef struct _sDevice{
    quint8 Login;
    OMJ_COMM OMJCommon;
    quint8 vabt;
    QString SNStr;
    SEVERTIME ServerTime;
    quint32 ServerIp;
}sDevice;

typedef struct _SLOCK{
    quint32 Incount;
    quint32 Outcount;
    quint8 Status;
    quint8 RightPlace;
    quint8 LeftPlace;
}SLOCK;


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void Sleep(quint32 msc);

    QString EncodMsg(CMD_TYPE_t cmd);
    CMD_TYPE_t GetCMDType(QString cmdstr);

    int EncodeActivekey(void);
    void EncodeKeyString(unsigned char *uckey);

    unsigned int sCreateTime;
    unsigned int sExpirateTime;
    QString keyCreateTimeStr,keyExpirateTimeStr;

    QString ClientIPStr;
    void UDPSendData();
    QString GetMsgStr(QStringList list , quint8 start, quint8 end);

    void OMJParaSet();

private slots:

    void NewConnectionSlot();
    void disconnectedSlot();

    void Read_Data();
    void on_pushButton_Open_clicked();
    void on_pushButton_Clean_clicked();
    void on_pushButton_Send_clicked();
    void DecodeMsg();

    void updateDateSlots();
    void on_pushButton_CreateKey_clicked();

    void on_checkBox_KMS_stateChanged(int arg1);

    void on_pushButton_TCP_Open_clicked();
    void on_pushButton_TCP_Send_clicked();


    void on_pushButton_clicked();
    void on_pushButton_heartbeat_clicked();

    void on_pushButton_GetSN_clicked();

    void on_pushButton_SetSN_clicked();

private:
    Ui::MainWindow *ui;
    QSerialPort *serial;

    QTimer *decodetimer;
    QTimer *UpdateDateTimer;

    QTcpServer *tcpServer;
    QList<QTcpSocket*> tcpClient;
    QTcpSocket *currentClient;

    QUdpSocket* UDPClinet;//通信socket

    QWidget *GatewayWidget;
    QComboBox *GatewayboBox;


};

#endif // MAINWINDOW_H
