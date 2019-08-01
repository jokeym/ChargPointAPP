/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButton_Open;
    QComboBox *PortBox;
    QGroupBox *groupBox_PortInfo;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_Clean;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_Send;
    QWidget *tab_3;
    QGroupBox *groupBox_Activation;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_9;
    QLineEdit *lineEdit_UUID;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_12;
    QCheckBox *checkBox_KMS;
    QSpacerItem *horizontalSpacer_10;
    QDateTimeEdit *dateTimeEdit_KeyExpirationTime;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_13;
    QSpacerItem *horizontalSpacer_11;
    QLineEdit *lineEdit_keyActivation;
    QHBoxLayout *horizontalLayout_15;
    QPushButton *pushButton_GetUUID;
    QPushButton *pushButton_CreateKey;
    QPushButton *pushButton_WriteKey;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_4;
    QPushButton *pushButton_RS485_TEST;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_11;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QSpinBox *spinBox_MastAddr;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_4;
    QSpinBox *spinBox_SlaveAddr;
    QPushButton *pushButton_RS485_ASK;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_5;
    QSpinBox *spinBox_DevNums;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QLineEdit *lineEdit_DC_Vol;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QLineEdit *lineEdit_VBAT_Vol;
    QWidget *tab_5;
    QLineEdit *lineEdit_2;
    QGroupBox *groupBox1;
    QVBoxLayout *verticalLayout_17;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_16;
    QRadioButton *radioButton_Net;
    QRadioButton *radioButton_WiFi;
    QRadioButton *radioButton_GPRS;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_9;
    QSpinBox *spinBox_vbat;
    QWidget *layoutWidget3;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *pushButton;
    QPushButton *pushButton_heartbeat;
    QGroupBox *groupBox2;
    QHBoxLayout *horizontalLayout_18;
    QCheckBox *checkBox_AutoSend;
    QSpinBox *spinBox_SendTimeout;
    QTableWidget *tw_Gateway;
    QWidget *tab_6;
    QTableWidget *tw_Lock;
    QWidget *tab;
    QLabel *label_18;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_50;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_15;
    QComboBox *comboBox_TCP_Type;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_16;
    QSpacerItem *horizontalSpacer_16;
    QComboBox *comboBox_LocalAddr;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_17;
    QSpacerItem *horizontalSpacer_17;
    QLineEdit *lineEdit_TCP_Port;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_TCP_Open;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_TCP_Send;
    QVBoxLayout *verticalLayout_22;
    QComboBox *comboBox_Connetion;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_55;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Broadcast;
    QSpacerItem *horizontalSpacer_6;
    QGroupBox *groupBox3;
    QVBoxLayout *verticalLayout_21;
    QHBoxLayout *horizontalLayout_49;
    QHBoxLayout *horizontalLayout_34;
    QLabel *label_28;
    QLineEdit *lineEdit_RedDevSN;
    QHBoxLayout *horizontalLayout_33;
    QLabel *label_27;
    QLineEdit *lineEdit_DevIPAddr;
    QLineEdit *lineEdit_ClientPort;
    QGroupBox *groupBox4;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_42;
    QVBoxLayout *verticalLayout_20;
    QHBoxLayout *horizontalLayout_25;
    QRadioButton *radioButton_Dev;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_7;
    QLineEdit *lineEdit_WriteDevSN;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_6;
    QLineEdit *lineEdit_DevID;
    QHBoxLayout *horizontalLayout_54;
    QRadioButton *radioButton_PlusTime;
    QVBoxLayout *verticalLayout_23;
    QHBoxLayout *horizontalLayout_51;
    QLabel *label_39;
    QSpinBox *spinBox_PulseTimeInterval;
    QHBoxLayout *horizontalLayout_52;
    QLabel *label_40;
    QSpinBox *spinBox_ReSendOverTime;
    QHBoxLayout *horizontalLayout_53;
    QLabel *label_41;
    QSpinBox *spinBox_ReSendCount;
    QHBoxLayout *horizontalLayout_47;
    QRadioButton *radioButton_VerSion;
    QVBoxLayout *verticalLayout_19;
    QHBoxLayout *horizontalLayout_35;
    QLabel *label_29;
    QLineEdit *lineEdit_DevModeType;
    QHBoxLayout *horizontalLayout_36;
    QLabel *label_30;
    QLineEdit *lineEdit_DevVer;
    QHBoxLayout *horizontalLayout_46;
    QRadioButton *radioButton_Server;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *horizontalLayout_43;
    QLabel *label_36;
    QLineEdit *lineEdit_ServerIP;
    QHBoxLayout *horizontalLayout_44;
    QLabel *label_37;
    QLineEdit *lineEdit_ServerPort;
    QHBoxLayout *horizontalLayout_45;
    QLabel *label_38;
    QLineEdit *lineEdit_ServerDNS;
    QHBoxLayout *horizontalLayout_48;
    QHBoxLayout *horizontalLayout_32;
    QHBoxLayout *horizontalLayout_30;
    QRadioButton *radioButton_Zigbee;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_10;
    QLineEdit *lineEdit_PanID;
    QHBoxLayout *horizontalLayout_56;
    QLabel *label_22;
    QComboBox *comboBox_ZigbeeBaud;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_14;
    QLineEdit *lineEdit_Myaddr;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_20;
    QLineEdit *lineEdit_TargetAddr;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_19;
    QSpinBox *spinBox_Chan;
    QHBoxLayout *horizontalLayout_26;
    QLabel *label_21;
    QLineEdit *lineEdit_ModuleType;
    QHBoxLayout *horizontalLayout_27;
    QLabel *label_23;
    QLineEdit *lineEdit_SendPower;
    QHBoxLayout *horizontalLayout_28;
    QLabel *label_24;
    QLineEdit *lineEdit_SendRetryCount;
    QHBoxLayout *horizontalLayout_29;
    QLabel *label_25;
    QLineEdit *lineEdit_RetryTimeout;
    QRadioButton *radioButton_ServerIp;
    QVBoxLayout *verticalLayout_18;
    QHBoxLayout *horizontalLayout_37;
    QLabel *label_35;
    QComboBox *comboBox_DHCP;
    QHBoxLayout *horizontalLayout_31;
    QLabel *label_26;
    QLineEdit *lineEdit_LanIP;
    QHBoxLayout *horizontalLayout_38;
    QLabel *label_34;
    QLineEdit *lineEdit_MASK;
    QHBoxLayout *horizontalLayout_39;
    QLabel *label_33;
    QLineEdit *lineEdit_Router;
    QHBoxLayout *horizontalLayout_40;
    QLabel *label_32;
    QLineEdit *lineEdit_LAN_Port;
    QHBoxLayout *horizontalLayout_41;
    QLabel *label_31;
    QLineEdit *lineEdit_MAC;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_SetInfo;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_GetInfo;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_8;
    QGroupBox *groupBox_text;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1016, 835);
        MainWindow->setMinimumSize(QSize(920, 835));
        MainWindow->setMaximumSize(QSize(16777215, 99999));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(9, 9, 800, 722));
        tabWidget->setMinimumSize(QSize(800, 0));
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        layoutWidget = new QWidget(tab_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 120, 161, 192));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_9 = new QVBoxLayout(groupBox);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        pushButton_Open = new QPushButton(groupBox);
        pushButton_Open->setObjectName(QStringLiteral("pushButton_Open"));

        verticalLayout_5->addWidget(pushButton_Open);

        PortBox = new QComboBox(groupBox);
        PortBox->setObjectName(QStringLiteral("PortBox"));
        PortBox->setMaxVisibleItems(10);

        verticalLayout_5->addWidget(PortBox);


        verticalLayout_9->addLayout(verticalLayout_5);


        verticalLayout_3->addWidget(groupBox);

        groupBox_PortInfo = new QGroupBox(layoutWidget);
        groupBox_PortInfo->setObjectName(QStringLiteral("groupBox_PortInfo"));
        verticalLayout = new QVBoxLayout(groupBox_PortInfo);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        pushButton_Clean = new QPushButton(groupBox_PortInfo);
        pushButton_Clean->setObjectName(QStringLiteral("pushButton_Clean"));

        verticalLayout->addWidget(pushButton_Clean);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushButton_Send = new QPushButton(groupBox_PortInfo);
        pushButton_Send->setObjectName(QStringLiteral("pushButton_Send"));

        verticalLayout->addWidget(pushButton_Send);


        verticalLayout_3->addWidget(groupBox_PortInfo);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        groupBox_Activation = new QGroupBox(tab_3);
        groupBox_Activation->setObjectName(QStringLiteral("groupBox_Activation"));
        groupBox_Activation->setGeometry(QRect(11, 11, 416, 191));
        verticalLayout_7 = new QVBoxLayout(groupBox_Activation);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        label_11 = new QLabel(groupBox_Activation);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_14->addWidget(label_11);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_9);

        lineEdit_UUID = new QLineEdit(groupBox_Activation);
        lineEdit_UUID->setObjectName(QStringLiteral("lineEdit_UUID"));

        horizontalLayout_14->addWidget(lineEdit_UUID);


        verticalLayout_7->addLayout(horizontalLayout_14);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_12 = new QLabel(groupBox_Activation);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_16->addWidget(label_12);

        checkBox_KMS = new QCheckBox(groupBox_Activation);
        checkBox_KMS->setObjectName(QStringLiteral("checkBox_KMS"));

        horizontalLayout_16->addWidget(checkBox_KMS);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_10);

        dateTimeEdit_KeyExpirationTime = new QDateTimeEdit(groupBox_Activation);
        dateTimeEdit_KeyExpirationTime->setObjectName(QStringLiteral("dateTimeEdit_KeyExpirationTime"));

        horizontalLayout_16->addWidget(dateTimeEdit_KeyExpirationTime);


        verticalLayout_7->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setSpacing(6);
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        label_13 = new QLabel(groupBox_Activation);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_17->addWidget(label_13);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_17->addItem(horizontalSpacer_11);

        lineEdit_keyActivation = new QLineEdit(groupBox_Activation);
        lineEdit_keyActivation->setObjectName(QStringLiteral("lineEdit_keyActivation"));

        horizontalLayout_17->addWidget(lineEdit_keyActivation);


        verticalLayout_7->addLayout(horizontalLayout_17);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        pushButton_GetUUID = new QPushButton(groupBox_Activation);
        pushButton_GetUUID->setObjectName(QStringLiteral("pushButton_GetUUID"));

        horizontalLayout_15->addWidget(pushButton_GetUUID);

        pushButton_CreateKey = new QPushButton(groupBox_Activation);
        pushButton_CreateKey->setObjectName(QStringLiteral("pushButton_CreateKey"));

        horizontalLayout_15->addWidget(pushButton_CreateKey);

        pushButton_WriteKey = new QPushButton(groupBox_Activation);
        pushButton_WriteKey->setObjectName(QStringLiteral("pushButton_WriteKey"));

        horizontalLayout_15->addWidget(pushButton_WriteKey);


        verticalLayout_7->addLayout(horizontalLayout_15);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_2);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        pushButton_RS485_TEST = new QPushButton(tab_4);
        pushButton_RS485_TEST->setObjectName(QStringLiteral("pushButton_RS485_TEST"));
        pushButton_RS485_TEST->setGeometry(QRect(30, 70, 93, 28));
        layoutWidget1 = new QWidget(tab_4);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(160, 50, 221, 119));
        verticalLayout_11 = new QVBoxLayout(layoutWidget1);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_7->addWidget(label_3);

        spinBox_MastAddr = new QSpinBox(layoutWidget1);
        spinBox_MastAddr->setObjectName(QStringLiteral("spinBox_MastAddr"));
        spinBox_MastAddr->setEnabled(false);
        spinBox_MastAddr->setMaximum(255);
        spinBox_MastAddr->setDisplayIntegerBase(10);

        horizontalLayout_7->addWidget(spinBox_MastAddr);


        verticalLayout_8->addLayout(horizontalLayout_7);


        verticalLayout_11->addLayout(verticalLayout_8);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_8->addWidget(label_4);

        spinBox_SlaveAddr = new QSpinBox(layoutWidget1);
        spinBox_SlaveAddr->setObjectName(QStringLiteral("spinBox_SlaveAddr"));
        spinBox_SlaveAddr->setMaximum(255);
        spinBox_SlaveAddr->setValue(0);

        horizontalLayout_8->addWidget(spinBox_SlaveAddr);


        verticalLayout_11->addLayout(horizontalLayout_8);

        pushButton_RS485_ASK = new QPushButton(layoutWidget1);
        pushButton_RS485_ASK->setObjectName(QStringLiteral("pushButton_RS485_ASK"));

        verticalLayout_11->addWidget(pushButton_RS485_ASK);

        layoutWidget2 = new QWidget(tab_4);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(50, 210, 221, 151));
        verticalLayout_6 = new QVBoxLayout(layoutWidget2);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_9->addWidget(label_5);

        spinBox_DevNums = new QSpinBox(layoutWidget2);
        spinBox_DevNums->setObjectName(QStringLiteral("spinBox_DevNums"));

        horizontalLayout_9->addWidget(spinBox_DevNums);


        verticalLayout_6->addLayout(horizontalLayout_9);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label = new QLabel(layoutWidget2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);

        lineEdit_DC_Vol = new QLineEdit(layoutWidget2);
        lineEdit_DC_Vol->setObjectName(QStringLiteral("lineEdit_DC_Vol"));

        horizontalLayout_5->addWidget(lineEdit_DC_Vol);


        verticalLayout_6->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_6->addWidget(label_2);

        lineEdit_VBAT_Vol = new QLineEdit(layoutWidget2);
        lineEdit_VBAT_Vol->setObjectName(QStringLiteral("lineEdit_VBAT_Vol"));

        horizontalLayout_6->addWidget(lineEdit_VBAT_Vol);


        verticalLayout_6->addLayout(horizontalLayout_6);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        lineEdit_2 = new QLineEdit(tab_5);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(-160, 30, 113, 21));
        groupBox1 = new QGroupBox(tab_5);
        groupBox1->setObjectName(QStringLiteral("groupBox1"));
        groupBox1->setGeometry(QRect(40, 20, 271, 121));
        verticalLayout_17 = new QVBoxLayout(groupBox1);
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setContentsMargins(11, 11, 11, 11);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_8 = new QLabel(groupBox1);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_12->addWidget(label_8);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        radioButton_Net = new QRadioButton(groupBox1);
        radioButton_Net->setObjectName(QStringLiteral("radioButton_Net"));

        verticalLayout_16->addWidget(radioButton_Net);

        radioButton_WiFi = new QRadioButton(groupBox1);
        radioButton_WiFi->setObjectName(QStringLiteral("radioButton_WiFi"));

        verticalLayout_16->addWidget(radioButton_WiFi);

        radioButton_GPRS = new QRadioButton(groupBox1);
        radioButton_GPRS->setObjectName(QStringLiteral("radioButton_GPRS"));
        radioButton_GPRS->setChecked(true);

        verticalLayout_16->addWidget(radioButton_GPRS);


        horizontalLayout_12->addLayout(verticalLayout_16);


        verticalLayout_17->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_9 = new QLabel(groupBox1);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_13->addWidget(label_9);

        spinBox_vbat = new QSpinBox(groupBox1);
        spinBox_vbat->setObjectName(QStringLiteral("spinBox_vbat"));
        spinBox_vbat->setMaximum(100);
        spinBox_vbat->setValue(76);

        horizontalLayout_13->addWidget(spinBox_vbat);


        verticalLayout_17->addLayout(horizontalLayout_13);

        layoutWidget3 = new QWidget(tab_5);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(350, 30, 266, 101));
        gridLayout_2 = new QGridLayout(layoutWidget3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        pushButton = new QPushButton(layoutWidget3);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_11->addWidget(pushButton);

        pushButton_heartbeat = new QPushButton(layoutWidget3);
        pushButton_heartbeat->setObjectName(QStringLiteral("pushButton_heartbeat"));

        horizontalLayout_11->addWidget(pushButton_heartbeat);


        gridLayout_2->addLayout(horizontalLayout_11, 0, 0, 1, 1);

        groupBox2 = new QGroupBox(layoutWidget3);
        groupBox2->setObjectName(QStringLiteral("groupBox2"));
        horizontalLayout_18 = new QHBoxLayout(groupBox2);
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        checkBox_AutoSend = new QCheckBox(groupBox2);
        checkBox_AutoSend->setObjectName(QStringLiteral("checkBox_AutoSend"));

        horizontalLayout_18->addWidget(checkBox_AutoSend);

        spinBox_SendTimeout = new QSpinBox(groupBox2);
        spinBox_SendTimeout->setObjectName(QStringLiteral("spinBox_SendTimeout"));
        spinBox_SendTimeout->setMaximum(10000);
        spinBox_SendTimeout->setValue(5);

        horizontalLayout_18->addWidget(spinBox_SendTimeout);


        gridLayout_2->addWidget(groupBox2, 1, 0, 1, 1);

        tw_Gateway = new QTableWidget(tab_5);
        if (tw_Gateway->columnCount() < 5)
            tw_Gateway->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tw_Gateway->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tw_Gateway->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tw_Gateway->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tw_Gateway->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tw_Gateway->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tw_Gateway->rowCount() < 7)
            tw_Gateway->setRowCount(7);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tw_Gateway->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tw_Gateway->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tw_Gateway->setVerticalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tw_Gateway->setVerticalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tw_Gateway->setVerticalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tw_Gateway->setVerticalHeaderItem(5, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tw_Gateway->setVerticalHeaderItem(6, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tw_Gateway->setItem(0, 3, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tw_Gateway->setItem(0, 4, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tw_Gateway->setItem(1, 3, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tw_Gateway->setItem(1, 4, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tw_Gateway->setItem(2, 3, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tw_Gateway->setItem(2, 4, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tw_Gateway->setItem(3, 3, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tw_Gateway->setItem(3, 4, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tw_Gateway->setItem(4, 3, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tw_Gateway->setItem(4, 4, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tw_Gateway->setItem(5, 3, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tw_Gateway->setItem(5, 4, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tw_Gateway->setItem(6, 3, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tw_Gateway->setItem(6, 4, __qtablewidgetitem25);
        tw_Gateway->setObjectName(QStringLiteral("tw_Gateway"));
        tw_Gateway->setGeometry(QRect(20, 170, 721, 371));
        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        tw_Lock = new QTableWidget(tab_6);
        if (tw_Lock->columnCount() < 7)
            tw_Lock->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tw_Lock->setHorizontalHeaderItem(0, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tw_Lock->setHorizontalHeaderItem(1, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tw_Lock->setHorizontalHeaderItem(2, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tw_Lock->setHorizontalHeaderItem(3, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tw_Lock->setHorizontalHeaderItem(4, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tw_Lock->setHorizontalHeaderItem(5, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tw_Lock->setHorizontalHeaderItem(6, __qtablewidgetitem32);
        if (tw_Lock->rowCount() < 9)
            tw_Lock->setRowCount(9);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tw_Lock->setVerticalHeaderItem(0, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tw_Lock->setVerticalHeaderItem(1, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tw_Lock->setVerticalHeaderItem(2, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tw_Lock->setVerticalHeaderItem(3, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tw_Lock->setVerticalHeaderItem(4, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tw_Lock->setVerticalHeaderItem(5, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tw_Lock->setVerticalHeaderItem(6, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tw_Lock->setVerticalHeaderItem(7, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tw_Lock->setVerticalHeaderItem(8, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tw_Lock->setItem(0, 1, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tw_Lock->setItem(0, 2, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tw_Lock->setItem(1, 1, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tw_Lock->setItem(1, 2, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tw_Lock->setItem(2, 1, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        tw_Lock->setItem(2, 2, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        tw_Lock->setItem(3, 1, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        tw_Lock->setItem(3, 2, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        tw_Lock->setItem(4, 1, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        tw_Lock->setItem(4, 2, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        tw_Lock->setItem(5, 1, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        tw_Lock->setItem(5, 2, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        tw_Lock->setItem(6, 1, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        tw_Lock->setItem(6, 2, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        tw_Lock->setItem(7, 1, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        tw_Lock->setItem(7, 2, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        tw_Lock->setItem(8, 1, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        tw_Lock->setItem(8, 2, __qtablewidgetitem59);
        tw_Lock->setObjectName(QStringLiteral("tw_Lock"));
        tw_Lock->setGeometry(QRect(11, 11, 761, 411));
        tw_Lock->setTextElideMode(Qt::ElideMiddle);
        tabWidget->addTab(tab_6, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label_18 = new QLabel(tab);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(401, 547, 16, 16));
        gridLayout_3 = new QGridLayout(tab);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMaximumSize(QSize(900, 145));
        horizontalLayout_50 = new QHBoxLayout(groupBox_2);
        horizontalLayout_50->setSpacing(6);
        horizontalLayout_50->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_50->setObjectName(QStringLiteral("horizontalLayout_50"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_2->addWidget(label_15);

        comboBox_TCP_Type = new QComboBox(groupBox_2);
        comboBox_TCP_Type->addItem(QString());
        comboBox_TCP_Type->addItem(QString());
        comboBox_TCP_Type->addItem(QString());
        comboBox_TCP_Type->setObjectName(QStringLiteral("comboBox_TCP_Type"));
        comboBox_TCP_Type->setMinimumSize(QSize(120, 0));

        horizontalLayout_2->addWidget(comboBox_TCP_Type);


        verticalLayout_10->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_3->addWidget(label_16);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_16);

        comboBox_LocalAddr = new QComboBox(groupBox_2);
        comboBox_LocalAddr->setObjectName(QStringLiteral("comboBox_LocalAddr"));
        comboBox_LocalAddr->setMinimumSize(QSize(120, 0));

        horizontalLayout_3->addWidget(comboBox_LocalAddr);


        verticalLayout_10->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_4->addWidget(label_17);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_17);

        lineEdit_TCP_Port = new QLineEdit(groupBox_2);
        lineEdit_TCP_Port->setObjectName(QStringLiteral("lineEdit_TCP_Port"));
        lineEdit_TCP_Port->setMinimumSize(QSize(120, 0));
        lineEdit_TCP_Port->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_4->addWidget(lineEdit_TCP_Port);


        verticalLayout_10->addLayout(horizontalLayout_4);


        verticalLayout_4->addLayout(verticalLayout_10);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_TCP_Open = new QPushButton(groupBox_2);
        pushButton_TCP_Open->setObjectName(QStringLiteral("pushButton_TCP_Open"));

        horizontalLayout->addWidget(pushButton_TCP_Open);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_TCP_Send = new QPushButton(groupBox_2);
        pushButton_TCP_Send->setObjectName(QStringLiteral("pushButton_TCP_Send"));

        horizontalLayout->addWidget(pushButton_TCP_Send);


        verticalLayout_4->addLayout(horizontalLayout);


        horizontalLayout_50->addLayout(verticalLayout_4);

        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setSpacing(6);
        verticalLayout_22->setObjectName(QStringLiteral("verticalLayout_22"));
        comboBox_Connetion = new QComboBox(groupBox_2);
        comboBox_Connetion->addItem(QString());
        comboBox_Connetion->setObjectName(QStringLiteral("comboBox_Connetion"));
        comboBox_Connetion->setMinimumSize(QSize(300, 0));

        verticalLayout_22->addWidget(comboBox_Connetion);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_22->addItem(verticalSpacer_4);

        horizontalLayout_55 = new QHBoxLayout();
        horizontalLayout_55->setSpacing(6);
        horizontalLayout_55->setObjectName(QStringLiteral("horizontalLayout_55"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_55->addItem(horizontalSpacer);

        pushButton_Broadcast = new QPushButton(groupBox_2);
        pushButton_Broadcast->setObjectName(QStringLiteral("pushButton_Broadcast"));

        horizontalLayout_55->addWidget(pushButton_Broadcast);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_55->addItem(horizontalSpacer_6);


        verticalLayout_22->addLayout(horizontalLayout_55);


        horizontalLayout_50->addLayout(verticalLayout_22);


        gridLayout_3->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox3 = new QGroupBox(tab);
        groupBox3->setObjectName(QStringLiteral("groupBox3"));
        groupBox3->setMaximumSize(QSize(820, 999999));
        verticalLayout_21 = new QVBoxLayout(groupBox3);
        verticalLayout_21->setSpacing(6);
        verticalLayout_21->setContentsMargins(11, 11, 11, 11);
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        horizontalLayout_49 = new QHBoxLayout();
        horizontalLayout_49->setSpacing(6);
        horizontalLayout_49->setObjectName(QStringLiteral("horizontalLayout_49"));
        horizontalLayout_34 = new QHBoxLayout();
        horizontalLayout_34->setSpacing(6);
        horizontalLayout_34->setObjectName(QStringLiteral("horizontalLayout_34"));
        label_28 = new QLabel(groupBox3);
        label_28->setObjectName(QStringLiteral("label_28"));

        horizontalLayout_34->addWidget(label_28);

        lineEdit_RedDevSN = new QLineEdit(groupBox3);
        lineEdit_RedDevSN->setObjectName(QStringLiteral("lineEdit_RedDevSN"));

        horizontalLayout_34->addWidget(lineEdit_RedDevSN);


        horizontalLayout_49->addLayout(horizontalLayout_34);

        horizontalLayout_33 = new QHBoxLayout();
        horizontalLayout_33->setSpacing(6);
        horizontalLayout_33->setObjectName(QStringLiteral("horizontalLayout_33"));
        label_27 = new QLabel(groupBox3);
        label_27->setObjectName(QStringLiteral("label_27"));

        horizontalLayout_33->addWidget(label_27);

        lineEdit_DevIPAddr = new QLineEdit(groupBox3);
        lineEdit_DevIPAddr->setObjectName(QStringLiteral("lineEdit_DevIPAddr"));

        horizontalLayout_33->addWidget(lineEdit_DevIPAddr);

        lineEdit_ClientPort = new QLineEdit(groupBox3);
        lineEdit_ClientPort->setObjectName(QStringLiteral("lineEdit_ClientPort"));

        horizontalLayout_33->addWidget(lineEdit_ClientPort);


        horizontalLayout_49->addLayout(horizontalLayout_33);


        verticalLayout_21->addLayout(horizontalLayout_49);

        groupBox4 = new QGroupBox(groupBox3);
        groupBox4->setObjectName(QStringLiteral("groupBox4"));
        verticalLayout_14 = new QVBoxLayout(groupBox4);
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        horizontalLayout_42 = new QHBoxLayout();
        horizontalLayout_42->setSpacing(6);
        horizontalLayout_42->setObjectName(QStringLiteral("horizontalLayout_42"));
        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setSpacing(6);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setSpacing(6);
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        radioButton_Dev = new QRadioButton(groupBox4);
        radioButton_Dev->setObjectName(QStringLiteral("radioButton_Dev"));
        radioButton_Dev->setChecked(true);

        horizontalLayout_25->addWidget(radioButton_Dev);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        label_7 = new QLabel(groupBox4);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_20->addWidget(label_7);

        lineEdit_WriteDevSN = new QLineEdit(groupBox4);
        lineEdit_WriteDevSN->setObjectName(QStringLiteral("lineEdit_WriteDevSN"));
        lineEdit_WriteDevSN->setMinimumSize(QSize(200, 0));

        horizontalLayout_20->addWidget(lineEdit_WriteDevSN);


        verticalLayout_12->addLayout(horizontalLayout_20);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        label_6 = new QLabel(groupBox4);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_19->addWidget(label_6);

        lineEdit_DevID = new QLineEdit(groupBox4);
        lineEdit_DevID->setObjectName(QStringLiteral("lineEdit_DevID"));
        lineEdit_DevID->setMinimumSize(QSize(200, 0));

        horizontalLayout_19->addWidget(lineEdit_DevID);


        verticalLayout_12->addLayout(horizontalLayout_19);


        horizontalLayout_25->addLayout(verticalLayout_12);


        verticalLayout_20->addLayout(horizontalLayout_25);

        horizontalLayout_54 = new QHBoxLayout();
        horizontalLayout_54->setSpacing(6);
        horizontalLayout_54->setObjectName(QStringLiteral("horizontalLayout_54"));
        radioButton_PlusTime = new QRadioButton(groupBox4);
        radioButton_PlusTime->setObjectName(QStringLiteral("radioButton_PlusTime"));

        horizontalLayout_54->addWidget(radioButton_PlusTime);

        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setSpacing(6);
        verticalLayout_23->setObjectName(QStringLiteral("verticalLayout_23"));
        horizontalLayout_51 = new QHBoxLayout();
        horizontalLayout_51->setSpacing(6);
        horizontalLayout_51->setObjectName(QStringLiteral("horizontalLayout_51"));
        label_39 = new QLabel(groupBox4);
        label_39->setObjectName(QStringLiteral("label_39"));

        horizontalLayout_51->addWidget(label_39);

        spinBox_PulseTimeInterval = new QSpinBox(groupBox4);
        spinBox_PulseTimeInterval->setObjectName(QStringLiteral("spinBox_PulseTimeInterval"));
        spinBox_PulseTimeInterval->setMinimumSize(QSize(200, 0));

        horizontalLayout_51->addWidget(spinBox_PulseTimeInterval);


        verticalLayout_23->addLayout(horizontalLayout_51);

        horizontalLayout_52 = new QHBoxLayout();
        horizontalLayout_52->setSpacing(6);
        horizontalLayout_52->setObjectName(QStringLiteral("horizontalLayout_52"));
        label_40 = new QLabel(groupBox4);
        label_40->setObjectName(QStringLiteral("label_40"));

        horizontalLayout_52->addWidget(label_40);

        spinBox_ReSendOverTime = new QSpinBox(groupBox4);
        spinBox_ReSendOverTime->setObjectName(QStringLiteral("spinBox_ReSendOverTime"));
        spinBox_ReSendOverTime->setMinimumSize(QSize(200, 0));

        horizontalLayout_52->addWidget(spinBox_ReSendOverTime);


        verticalLayout_23->addLayout(horizontalLayout_52);

        horizontalLayout_53 = new QHBoxLayout();
        horizontalLayout_53->setSpacing(6);
        horizontalLayout_53->setObjectName(QStringLiteral("horizontalLayout_53"));
        label_41 = new QLabel(groupBox4);
        label_41->setObjectName(QStringLiteral("label_41"));

        horizontalLayout_53->addWidget(label_41);

        spinBox_ReSendCount = new QSpinBox(groupBox4);
        spinBox_ReSendCount->setObjectName(QStringLiteral("spinBox_ReSendCount"));
        spinBox_ReSendCount->setMinimumSize(QSize(200, 0));

        horizontalLayout_53->addWidget(spinBox_ReSendCount);


        verticalLayout_23->addLayout(horizontalLayout_53);


        horizontalLayout_54->addLayout(verticalLayout_23);


        verticalLayout_20->addLayout(horizontalLayout_54);

        horizontalLayout_47 = new QHBoxLayout();
        horizontalLayout_47->setSpacing(6);
        horizontalLayout_47->setObjectName(QStringLiteral("horizontalLayout_47"));
        radioButton_VerSion = new QRadioButton(groupBox4);
        radioButton_VerSion->setObjectName(QStringLiteral("radioButton_VerSion"));

        horizontalLayout_47->addWidget(radioButton_VerSion);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setSpacing(6);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        horizontalLayout_35 = new QHBoxLayout();
        horizontalLayout_35->setSpacing(6);
        horizontalLayout_35->setObjectName(QStringLiteral("horizontalLayout_35"));
        label_29 = new QLabel(groupBox4);
        label_29->setObjectName(QStringLiteral("label_29"));

        horizontalLayout_35->addWidget(label_29);

        lineEdit_DevModeType = new QLineEdit(groupBox4);
        lineEdit_DevModeType->setObjectName(QStringLiteral("lineEdit_DevModeType"));
        lineEdit_DevModeType->setMinimumSize(QSize(200, 0));

        horizontalLayout_35->addWidget(lineEdit_DevModeType);


        verticalLayout_19->addLayout(horizontalLayout_35);

        horizontalLayout_36 = new QHBoxLayout();
        horizontalLayout_36->setSpacing(6);
        horizontalLayout_36->setObjectName(QStringLiteral("horizontalLayout_36"));
        label_30 = new QLabel(groupBox4);
        label_30->setObjectName(QStringLiteral("label_30"));

        horizontalLayout_36->addWidget(label_30);

        lineEdit_DevVer = new QLineEdit(groupBox4);
        lineEdit_DevVer->setObjectName(QStringLiteral("lineEdit_DevVer"));
        lineEdit_DevVer->setMinimumSize(QSize(200, 0));

        horizontalLayout_36->addWidget(lineEdit_DevVer);


        verticalLayout_19->addLayout(horizontalLayout_36);


        horizontalLayout_47->addLayout(verticalLayout_19);


        verticalLayout_20->addLayout(horizontalLayout_47);


        horizontalLayout_42->addLayout(verticalLayout_20);

        horizontalLayout_46 = new QHBoxLayout();
        horizontalLayout_46->setSpacing(6);
        horizontalLayout_46->setObjectName(QStringLiteral("horizontalLayout_46"));
        radioButton_Server = new QRadioButton(groupBox4);
        radioButton_Server->setObjectName(QStringLiteral("radioButton_Server"));

        horizontalLayout_46->addWidget(radioButton_Server);

        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        horizontalLayout_43 = new QHBoxLayout();
        horizontalLayout_43->setSpacing(6);
        horizontalLayout_43->setObjectName(QStringLiteral("horizontalLayout_43"));
        label_36 = new QLabel(groupBox4);
        label_36->setObjectName(QStringLiteral("label_36"));

        horizontalLayout_43->addWidget(label_36);

        lineEdit_ServerIP = new QLineEdit(groupBox4);
        lineEdit_ServerIP->setObjectName(QStringLiteral("lineEdit_ServerIP"));
        lineEdit_ServerIP->setMinimumSize(QSize(233, 0));

        horizontalLayout_43->addWidget(lineEdit_ServerIP);


        verticalLayout_15->addLayout(horizontalLayout_43);

        horizontalLayout_44 = new QHBoxLayout();
        horizontalLayout_44->setSpacing(6);
        horizontalLayout_44->setObjectName(QStringLiteral("horizontalLayout_44"));
        label_37 = new QLabel(groupBox4);
        label_37->setObjectName(QStringLiteral("label_37"));

        horizontalLayout_44->addWidget(label_37);

        lineEdit_ServerPort = new QLineEdit(groupBox4);
        lineEdit_ServerPort->setObjectName(QStringLiteral("lineEdit_ServerPort"));

        horizontalLayout_44->addWidget(lineEdit_ServerPort);


        verticalLayout_15->addLayout(horizontalLayout_44);

        horizontalLayout_45 = new QHBoxLayout();
        horizontalLayout_45->setSpacing(6);
        horizontalLayout_45->setObjectName(QStringLiteral("horizontalLayout_45"));
        label_38 = new QLabel(groupBox4);
        label_38->setObjectName(QStringLiteral("label_38"));

        horizontalLayout_45->addWidget(label_38);

        lineEdit_ServerDNS = new QLineEdit(groupBox4);
        lineEdit_ServerDNS->setObjectName(QStringLiteral("lineEdit_ServerDNS"));

        horizontalLayout_45->addWidget(lineEdit_ServerDNS);


        verticalLayout_15->addLayout(horizontalLayout_45);


        horizontalLayout_46->addLayout(verticalLayout_15);


        horizontalLayout_42->addLayout(horizontalLayout_46);


        verticalLayout_14->addLayout(horizontalLayout_42);

        horizontalLayout_48 = new QHBoxLayout();
        horizontalLayout_48->setSpacing(6);
        horizontalLayout_48->setObjectName(QStringLiteral("horizontalLayout_48"));
        horizontalLayout_32 = new QHBoxLayout();
        horizontalLayout_32->setSpacing(6);
        horizontalLayout_32->setObjectName(QStringLiteral("horizontalLayout_32"));
        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setSpacing(6);
        horizontalLayout_30->setObjectName(QStringLiteral("horizontalLayout_30"));
        horizontalLayout_30->setSizeConstraint(QLayout::SetDefaultConstraint);
        radioButton_Zigbee = new QRadioButton(groupBox4);
        radioButton_Zigbee->setObjectName(QStringLiteral("radioButton_Zigbee"));

        horizontalLayout_30->addWidget(radioButton_Zigbee);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        label_10 = new QLabel(groupBox4);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_21->addWidget(label_10);

        lineEdit_PanID = new QLineEdit(groupBox4);
        lineEdit_PanID->setObjectName(QStringLiteral("lineEdit_PanID"));
        lineEdit_PanID->setMinimumSize(QSize(200, 0));
        lineEdit_PanID->setReadOnly(false);

        horizontalLayout_21->addWidget(lineEdit_PanID);


        verticalLayout_13->addLayout(horizontalLayout_21);

        horizontalLayout_56 = new QHBoxLayout();
        horizontalLayout_56->setSpacing(6);
        horizontalLayout_56->setObjectName(QStringLiteral("horizontalLayout_56"));
        label_22 = new QLabel(groupBox4);
        label_22->setObjectName(QStringLiteral("label_22"));

        horizontalLayout_56->addWidget(label_22);

        comboBox_ZigbeeBaud = new QComboBox(groupBox4);
        comboBox_ZigbeeBaud->addItem(QString());
        comboBox_ZigbeeBaud->addItem(QString());
        comboBox_ZigbeeBaud->addItem(QString());
        comboBox_ZigbeeBaud->addItem(QString());
        comboBox_ZigbeeBaud->addItem(QString());
        comboBox_ZigbeeBaud->addItem(QString());
        comboBox_ZigbeeBaud->addItem(QString());
        comboBox_ZigbeeBaud->setObjectName(QStringLiteral("comboBox_ZigbeeBaud"));
        comboBox_ZigbeeBaud->setMinimumSize(QSize(200, 0));

        horizontalLayout_56->addWidget(comboBox_ZigbeeBaud);


        verticalLayout_13->addLayout(horizontalLayout_56);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        label_14 = new QLabel(groupBox4);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_22->addWidget(label_14);

        lineEdit_Myaddr = new QLineEdit(groupBox4);
        lineEdit_Myaddr->setObjectName(QStringLiteral("lineEdit_Myaddr"));
        lineEdit_Myaddr->setMinimumSize(QSize(200, 0));

        horizontalLayout_22->addWidget(lineEdit_Myaddr);


        verticalLayout_13->addLayout(horizontalLayout_22);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        label_20 = new QLabel(groupBox4);
        label_20->setObjectName(QStringLiteral("label_20"));

        horizontalLayout_24->addWidget(label_20);

        lineEdit_TargetAddr = new QLineEdit(groupBox4);
        lineEdit_TargetAddr->setObjectName(QStringLiteral("lineEdit_TargetAddr"));
        lineEdit_TargetAddr->setMinimumSize(QSize(200, 0));

        horizontalLayout_24->addWidget(lineEdit_TargetAddr);


        verticalLayout_13->addLayout(horizontalLayout_24);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setSpacing(6);
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        label_19 = new QLabel(groupBox4);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout_23->addWidget(label_19);

        spinBox_Chan = new QSpinBox(groupBox4);
        spinBox_Chan->setObjectName(QStringLiteral("spinBox_Chan"));
        spinBox_Chan->setMinimumSize(QSize(200, 0));
        spinBox_Chan->setMinimum(11);
        spinBox_Chan->setMaximum(26);
        spinBox_Chan->setValue(15);

        horizontalLayout_23->addWidget(spinBox_Chan);


        verticalLayout_13->addLayout(horizontalLayout_23);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setSpacing(6);
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        label_21 = new QLabel(groupBox4);
        label_21->setObjectName(QStringLiteral("label_21"));

        horizontalLayout_26->addWidget(label_21);

        lineEdit_ModuleType = new QLineEdit(groupBox4);
        lineEdit_ModuleType->setObjectName(QStringLiteral("lineEdit_ModuleType"));
        lineEdit_ModuleType->setMinimumSize(QSize(200, 0));

        horizontalLayout_26->addWidget(lineEdit_ModuleType);


        verticalLayout_13->addLayout(horizontalLayout_26);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setSpacing(6);
        horizontalLayout_27->setObjectName(QStringLiteral("horizontalLayout_27"));
        label_23 = new QLabel(groupBox4);
        label_23->setObjectName(QStringLiteral("label_23"));

        horizontalLayout_27->addWidget(label_23);

        lineEdit_SendPower = new QLineEdit(groupBox4);
        lineEdit_SendPower->setObjectName(QStringLiteral("lineEdit_SendPower"));
        lineEdit_SendPower->setMinimumSize(QSize(200, 0));

        horizontalLayout_27->addWidget(lineEdit_SendPower);


        verticalLayout_13->addLayout(horizontalLayout_27);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setSpacing(6);
        horizontalLayout_28->setObjectName(QStringLiteral("horizontalLayout_28"));
        label_24 = new QLabel(groupBox4);
        label_24->setObjectName(QStringLiteral("label_24"));

        horizontalLayout_28->addWidget(label_24);

        lineEdit_SendRetryCount = new QLineEdit(groupBox4);
        lineEdit_SendRetryCount->setObjectName(QStringLiteral("lineEdit_SendRetryCount"));
        lineEdit_SendRetryCount->setMinimumSize(QSize(200, 0));

        horizontalLayout_28->addWidget(lineEdit_SendRetryCount);


        verticalLayout_13->addLayout(horizontalLayout_28);

        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setSpacing(6);
        horizontalLayout_29->setObjectName(QStringLiteral("horizontalLayout_29"));
        label_25 = new QLabel(groupBox4);
        label_25->setObjectName(QStringLiteral("label_25"));

        horizontalLayout_29->addWidget(label_25);

        lineEdit_RetryTimeout = new QLineEdit(groupBox4);
        lineEdit_RetryTimeout->setObjectName(QStringLiteral("lineEdit_RetryTimeout"));
        lineEdit_RetryTimeout->setMinimumSize(QSize(200, 0));

        horizontalLayout_29->addWidget(lineEdit_RetryTimeout);


        verticalLayout_13->addLayout(horizontalLayout_29);


        horizontalLayout_30->addLayout(verticalLayout_13);


        horizontalLayout_32->addLayout(horizontalLayout_30);

        radioButton_ServerIp = new QRadioButton(groupBox4);
        radioButton_ServerIp->setObjectName(QStringLiteral("radioButton_ServerIp"));

        horizontalLayout_32->addWidget(radioButton_ServerIp);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setSpacing(6);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        horizontalLayout_37 = new QHBoxLayout();
        horizontalLayout_37->setSpacing(6);
        horizontalLayout_37->setObjectName(QStringLiteral("horizontalLayout_37"));
        label_35 = new QLabel(groupBox4);
        label_35->setObjectName(QStringLiteral("label_35"));

        horizontalLayout_37->addWidget(label_35);

        comboBox_DHCP = new QComboBox(groupBox4);
        comboBox_DHCP->addItem(QString());
        comboBox_DHCP->addItem(QString());
        comboBox_DHCP->setObjectName(QStringLiteral("comboBox_DHCP"));

        horizontalLayout_37->addWidget(comboBox_DHCP);


        verticalLayout_18->addLayout(horizontalLayout_37);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setSpacing(6);
        horizontalLayout_31->setObjectName(QStringLiteral("horizontalLayout_31"));
        label_26 = new QLabel(groupBox4);
        label_26->setObjectName(QStringLiteral("label_26"));

        horizontalLayout_31->addWidget(label_26);

        lineEdit_LanIP = new QLineEdit(groupBox4);
        lineEdit_LanIP->setObjectName(QStringLiteral("lineEdit_LanIP"));
        lineEdit_LanIP->setMinimumSize(QSize(233, 0));

        horizontalLayout_31->addWidget(lineEdit_LanIP);


        verticalLayout_18->addLayout(horizontalLayout_31);

        horizontalLayout_38 = new QHBoxLayout();
        horizontalLayout_38->setSpacing(6);
        horizontalLayout_38->setObjectName(QStringLiteral("horizontalLayout_38"));
        label_34 = new QLabel(groupBox4);
        label_34->setObjectName(QStringLiteral("label_34"));

        horizontalLayout_38->addWidget(label_34);

        lineEdit_MASK = new QLineEdit(groupBox4);
        lineEdit_MASK->setObjectName(QStringLiteral("lineEdit_MASK"));

        horizontalLayout_38->addWidget(lineEdit_MASK);


        verticalLayout_18->addLayout(horizontalLayout_38);

        horizontalLayout_39 = new QHBoxLayout();
        horizontalLayout_39->setSpacing(6);
        horizontalLayout_39->setObjectName(QStringLiteral("horizontalLayout_39"));
        label_33 = new QLabel(groupBox4);
        label_33->setObjectName(QStringLiteral("label_33"));

        horizontalLayout_39->addWidget(label_33);

        lineEdit_Router = new QLineEdit(groupBox4);
        lineEdit_Router->setObjectName(QStringLiteral("lineEdit_Router"));

        horizontalLayout_39->addWidget(lineEdit_Router);


        verticalLayout_18->addLayout(horizontalLayout_39);

        horizontalLayout_40 = new QHBoxLayout();
        horizontalLayout_40->setSpacing(6);
        horizontalLayout_40->setObjectName(QStringLiteral("horizontalLayout_40"));
        label_32 = new QLabel(groupBox4);
        label_32->setObjectName(QStringLiteral("label_32"));

        horizontalLayout_40->addWidget(label_32);

        lineEdit_LAN_Port = new QLineEdit(groupBox4);
        lineEdit_LAN_Port->setObjectName(QStringLiteral("lineEdit_LAN_Port"));

        horizontalLayout_40->addWidget(lineEdit_LAN_Port);


        verticalLayout_18->addLayout(horizontalLayout_40);

        horizontalLayout_41 = new QHBoxLayout();
        horizontalLayout_41->setSpacing(6);
        horizontalLayout_41->setObjectName(QStringLiteral("horizontalLayout_41"));
        label_31 = new QLabel(groupBox4);
        label_31->setObjectName(QStringLiteral("label_31"));

        horizontalLayout_41->addWidget(label_31);

        lineEdit_MAC = new QLineEdit(groupBox4);
        lineEdit_MAC->setObjectName(QStringLiteral("lineEdit_MAC"));

        horizontalLayout_41->addWidget(lineEdit_MAC);


        verticalLayout_18->addLayout(horizontalLayout_41);


        horizontalLayout_32->addLayout(verticalLayout_18);


        horizontalLayout_48->addLayout(horizontalLayout_32);


        verticalLayout_14->addLayout(horizontalLayout_48);


        verticalLayout_21->addWidget(groupBox4);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_4);

        pushButton_SetInfo = new QPushButton(groupBox3);
        pushButton_SetInfo->setObjectName(QStringLiteral("pushButton_SetInfo"));

        horizontalLayout_10->addWidget(pushButton_SetInfo);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);

        pushButton_GetInfo = new QPushButton(groupBox3);
        pushButton_GetInfo->setObjectName(QStringLiteral("pushButton_GetInfo"));

        horizontalLayout_10->addWidget(pushButton_GetInfo);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_5);


        verticalLayout_21->addLayout(horizontalLayout_10);


        gridLayout_3->addWidget(groupBox3, 1, 0, 1, 2);

        horizontalSpacer_8 = new QSpacerItem(188, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_8, 0, 1, 1, 1);

        tabWidget->addTab(tab, QString());
        groupBox_text = new QGroupBox(centralWidget);
        groupBox_text->setObjectName(QStringLiteral("groupBox_text"));
        groupBox_text->setGeometry(QRect(815, 9, 192, 772));
        groupBox_text->setMinimumSize(QSize(0, 0));
        verticalLayout_2 = new QVBoxLayout(groupBox_text);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        textEdit = new QTextEdit(groupBox_text);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout_2->addWidget(textEdit);

        lineEdit = new QLineEdit(groupBox_text);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1016, 23));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(5);
        comboBox_ZigbeeBaud->setCurrentIndex(6);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\346\254\247\347\276\216\345\230\211\347\275\221\345\205\263", nullptr));
        pushButton_Open->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        pushButton_Clean->setText(QApplication::translate("MainWindow", "\346\270\205\351\231\244", nullptr));
        pushButton_Send->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "  \344\270\262\345\217\243", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "\350\256\276\345\244\207UUID", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "\345\210\260\346\234\237\346\227\266\351\227\264", nullptr));
        checkBox_KMS->setText(QApplication::translate("MainWindow", "\346\260\270\344\271\205\346\277\200\346\264\273", nullptr));
#ifndef QT_NO_TOOLTIP
        dateTimeEdit_KeyExpirationTime->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; color:#ff0000;\">\350\256\276\345\244\207\347\232\204\344\275\277\347\224\250\346\210\252\350\207\263\346\234\237\351\231\220</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        dateTimeEdit_KeyExpirationTime->setDisplayFormat(QApplication::translate("MainWindow", "yyyy-MM-dd HH:mm:ss", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "\346\277\200\346\264\273\345\257\206\351\222\245", nullptr));
        pushButton_GetUUID->setText(QApplication::translate("MainWindow", "\350\216\267\345\217\226UUID", nullptr));
        pushButton_CreateKey->setText(QApplication::translate("MainWindow", "\347\224\237\346\210\220\345\257\206\351\222\245", nullptr));
        pushButton_WriteKey->setText(QApplication::translate("MainWindow", "\345\206\231\345\205\245\345\257\206\351\222\245", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\345\257\206\351\222\245\346\277\200\346\264\273", nullptr));
        pushButton_RS485_TEST->setText(QApplication::translate("MainWindow", "\346\265\213\350\257\225", nullptr));
        label_3->setText(QApplication::translate("MainWindow", " \344\270\273\346\234\272", nullptr));
        label_4->setText(QApplication::translate("MainWindow", " \344\273\216 \346\234\272", nullptr));
        pushButton_RS485_ASK->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\350\256\276 \345\244\207 \345\217\267", nullptr));
        label->setText(QApplication::translate("MainWindow", "DC \347\224\265\345\216\213/V  ", nullptr));
        label_2->setText(QApplication::translate("MainWindow", " \347\224\265\346\261\240\347\224\265\345\216\213/V", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "RS485", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "\351\200\232\350\256\257\346\226\271\345\274\217", nullptr));
        radioButton_Net->setText(QApplication::translate("MainWindow", "\344\273\245\345\244\252\347\275\221", nullptr));
        radioButton_WiFi->setText(QApplication::translate("MainWindow", "WiFi", nullptr));
        radioButton_GPRS->setText(QApplication::translate("MainWindow", "GPRS", nullptr));
        label_9->setText(QApplication::translate("MainWindow", " \347\224\265\351\207\217", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", " \347\231\273\345\275\225", nullptr));
        pushButton_heartbeat->setText(QApplication::translate("MainWindow", " \345\277\203\350\267\263", nullptr));
        checkBox_AutoSend->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\345\217\221\351\200\201  \351\227\264\351\232\224\346\227\266\351\227\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tw_Gateway->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\351\200\232\350\256\257\346\226\271\345\274\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tw_Gateway->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\347\224\265      \351\207\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tw_Gateway->horizontalHeaderItem(3);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\350\256\276\345\244\207\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tw_Gateway->horizontalHeaderItem(4);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\350\256\276\345\244\207\347\274\226\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tw_Gateway->verticalHeaderItem(0);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tw_Gateway->verticalHeaderItem(1);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tw_Gateway->verticalHeaderItem(2);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tw_Gateway->verticalHeaderItem(3);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tw_Gateway->verticalHeaderItem(4);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tw_Gateway->verticalHeaderItem(5);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tw_Gateway->verticalHeaderItem(6);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "7", nullptr));

        const bool __sortingEnabled = tw_Gateway->isSortingEnabled();
        tw_Gateway->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem11 = tw_Gateway->item(0, 3);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "\347\275\221\345\205\263_TEST_1", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tw_Gateway->item(0, 4);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "4545454545454545", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tw_Gateway->item(1, 3);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "\347\275\221\345\205\263No.26", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tw_Gateway->item(1, 4);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "2019031615042612", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tw_Gateway->item(2, 3);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "\347\275\221\345\205\263No.15", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tw_Gateway->item(2, 4);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "2019031517351536", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tw_Gateway->item(3, 3);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "\347\275\221\345\205\263No.25", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tw_Gateway->item(3, 4);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "2019031417222552", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tw_Gateway->item(4, 3);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "\347\275\221\345\205\263No.18", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tw_Gateway->item(4, 4);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "2019031416251881", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tw_Gateway->item(5, 3);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "\347\275\221\345\205\263No.3", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tw_Gateway->item(5, 4);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindow", "2019030410261302", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tw_Gateway->item(6, 3);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWindow", "\347\275\221\345\205\263No.7", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tw_Gateway->item(6, 4);
        ___qtablewidgetitem24->setText(QApplication::translate("MainWindow", "2018022310151234", nullptr));
        tw_Gateway->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "\347\275\221\345\205\263", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tw_Lock->horizontalHeaderItem(1);
        ___qtablewidgetitem25->setText(QApplication::translate("MainWindow", "\350\256\276\345\244\207\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tw_Lock->horizontalHeaderItem(2);
        ___qtablewidgetitem26->setText(QApplication::translate("MainWindow", "\350\256\276\345\244\207\347\274\226\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = tw_Lock->horizontalHeaderItem(3);
        ___qtablewidgetitem27->setText(QApplication::translate("MainWindow", "\345\217\263\351\227\250\347\246\201\347\212\266\346\200\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = tw_Lock->horizontalHeaderItem(4);
        ___qtablewidgetitem28->setText(QApplication::translate("MainWindow", "\345\267\246\351\227\250\347\246\201\347\212\266\346\200\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = tw_Lock->horizontalHeaderItem(5);
        ___qtablewidgetitem29->setText(QApplication::translate("MainWindow", "\350\256\276\345\244\207\347\261\273\345\236\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = tw_Lock->horizontalHeaderItem(6);
        ___qtablewidgetitem30->setText(QApplication::translate("MainWindow", "\350\275\257\344\273\266\347\211\210\346\234\254", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = tw_Lock->verticalHeaderItem(0);
        ___qtablewidgetitem31->setText(QApplication::translate("MainWindow", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = tw_Lock->verticalHeaderItem(1);
        ___qtablewidgetitem32->setText(QApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = tw_Lock->verticalHeaderItem(2);
        ___qtablewidgetitem33->setText(QApplication::translate("MainWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = tw_Lock->verticalHeaderItem(3);
        ___qtablewidgetitem34->setText(QApplication::translate("MainWindow", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = tw_Lock->verticalHeaderItem(4);
        ___qtablewidgetitem35->setText(QApplication::translate("MainWindow", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem36 = tw_Lock->verticalHeaderItem(5);
        ___qtablewidgetitem36->setText(QApplication::translate("MainWindow", "6", nullptr));
        QTableWidgetItem *___qtablewidgetitem37 = tw_Lock->verticalHeaderItem(6);
        ___qtablewidgetitem37->setText(QApplication::translate("MainWindow", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem38 = tw_Lock->verticalHeaderItem(7);
        ___qtablewidgetitem38->setText(QApplication::translate("MainWindow", "8", nullptr));
        QTableWidgetItem *___qtablewidgetitem39 = tw_Lock->verticalHeaderItem(8);
        ___qtablewidgetitem39->setText(QApplication::translate("MainWindow", "9", nullptr));

        const bool __sortingEnabled1 = tw_Lock->isSortingEnabled();
        tw_Lock->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem40 = tw_Lock->item(0, 1);
        ___qtablewidgetitem40->setText(QApplication::translate("MainWindow", "\351\227\250\347\246\201No.52", nullptr));
        QTableWidgetItem *___qtablewidgetitem41 = tw_Lock->item(0, 2);
        ___qtablewidgetitem41->setText(QApplication::translate("MainWindow", "2019031516130052", nullptr));
        QTableWidgetItem *___qtablewidgetitem42 = tw_Lock->item(1, 1);
        ___qtablewidgetitem42->setText(QApplication::translate("MainWindow", "\351\227\250\347\246\201No.51", nullptr));
        QTableWidgetItem *___qtablewidgetitem43 = tw_Lock->item(1, 2);
        ___qtablewidgetitem43->setText(QApplication::translate("MainWindow", "2019031515500051", nullptr));
        QTableWidgetItem *___qtablewidgetitem44 = tw_Lock->item(2, 1);
        ___qtablewidgetitem44->setText(QApplication::translate("MainWindow", "\351\227\250\347\246\201No.8", nullptr));
        QTableWidgetItem *___qtablewidgetitem45 = tw_Lock->item(2, 2);
        ___qtablewidgetitem45->setText(QApplication::translate("MainWindow", "2019031316330008", nullptr));
        QTableWidgetItem *___qtablewidgetitem46 = tw_Lock->item(3, 1);
        ___qtablewidgetitem46->setText(QApplication::translate("MainWindow", "\351\227\250\347\246\201No.50", nullptr));
        QTableWidgetItem *___qtablewidgetitem47 = tw_Lock->item(3, 2);
        ___qtablewidgetitem47->setText(QApplication::translate("MainWindow", "2019031515080050", nullptr));
        QTableWidgetItem *___qtablewidgetitem48 = tw_Lock->item(4, 1);
        ___qtablewidgetitem48->setText(QApplication::translate("MainWindow", "\351\227\250\347\246\201No.2", nullptr));
        QTableWidgetItem *___qtablewidgetitem49 = tw_Lock->item(4, 2);
        ___qtablewidgetitem49->setText(QApplication::translate("MainWindow", "2019031314130002", nullptr));
        QTableWidgetItem *___qtablewidgetitem50 = tw_Lock->item(5, 1);
        ___qtablewidgetitem50->setText(QApplication::translate("MainWindow", "\351\227\250\347\246\201No.1", nullptr));
        QTableWidgetItem *___qtablewidgetitem51 = tw_Lock->item(5, 2);
        ___qtablewidgetitem51->setText(QApplication::translate("MainWindow", "2019031314130001", nullptr));
        QTableWidgetItem *___qtablewidgetitem52 = tw_Lock->item(6, 1);
        ___qtablewidgetitem52->setText(QApplication::translate("MainWindow", "\351\227\250\347\246\201No.7777", nullptr));
        QTableWidgetItem *___qtablewidgetitem53 = tw_Lock->item(6, 2);
        ___qtablewidgetitem53->setText(QApplication::translate("MainWindow", "2019030510427777", nullptr));
        QTableWidgetItem *___qtablewidgetitem54 = tw_Lock->item(7, 1);
        ___qtablewidgetitem54->setText(QApplication::translate("MainWindow", "\351\227\250\347\246\201No.7 ", nullptr));
        QTableWidgetItem *___qtablewidgetitem55 = tw_Lock->item(7, 2);
        ___qtablewidgetitem55->setText(QApplication::translate("MainWindow", "2019022616525678", nullptr));
        QTableWidgetItem *___qtablewidgetitem56 = tw_Lock->item(8, 1);
        ___qtablewidgetitem56->setText(QApplication::translate("MainWindow", "\351\227\250\347\246\201No.3", nullptr));
        QTableWidgetItem *___qtablewidgetitem57 = tw_Lock->item(8, 2);
        ___qtablewidgetitem57->setText(QApplication::translate("MainWindow", "2019022115410001", nullptr));
        tw_Lock->setSortingEnabled(__sortingEnabled1);

        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindow", "\351\227\250\347\246\201", nullptr));
        label_18->setText(QString());
        label_15->setText(QApplication::translate("MainWindow", "\345\215\217\350\256\256\347\261\273\345\236\213", nullptr));
        comboBox_TCP_Type->setItemText(0, QString());
        comboBox_TCP_Type->setItemText(1, QString());
        comboBox_TCP_Type->setItemText(2, QApplication::translate("MainWindow", "UDP", nullptr));

        label_16->setText(QApplication::translate("MainWindow", "IP \345\234\260\345\235\200", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "\347\253\257   \345\217\243", nullptr));
        lineEdit_TCP_Port->setText(QApplication::translate("MainWindow", "7519", nullptr));
        pushButton_TCP_Open->setText(QApplication::translate("MainWindow", "\347\233\221\345\220\254", nullptr));
        pushButton_TCP_Send->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        comboBox_Connetion->setItemText(0, QApplication::translate("MainWindow", "\345\205\250\351\203\250\350\277\236\346\216\245", nullptr));

        pushButton_Broadcast->setText(QApplication::translate("MainWindow", "\346\220\234\347\264\242", nullptr));
        label_28->setText(QApplication::translate("MainWindow", "\350\256\276\345\244\207\345\272\217\345\210\227\345\217\267 ", nullptr));
        lineEdit_RedDevSN->setText(QApplication::translate("MainWindow", "0000000000000000", nullptr));
        label_27->setText(QApplication::translate("MainWindow", "\350\256\276\345\244\207IP\345\234\260\345\235\200", nullptr));
        lineEdit_DevIPAddr->setText(QApplication::translate("MainWindow", "192.168.1.20", nullptr));
        lineEdit_ClientPort->setText(QApplication::translate("MainWindow", "4001", nullptr));
        radioButton_Dev->setText(QApplication::translate("MainWindow", " \350\256\276 \345\244\207", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\345\272\217\345\210\227\345\217\267  ", nullptr));
        lineEdit_WriteDevSN->setText(QString());
        label_6->setText(QApplication::translate("MainWindow", "\345\234\260  \345\235\200  ", nullptr));
        radioButton_PlusTime->setText(QApplication::translate("MainWindow", " \345\277\203 \350\267\263", nullptr));
        label_39->setText(QApplication::translate("MainWindow", "\345\277\203\350\267\263\346\227\266\351\227\264", nullptr));
        label_40->setText(QApplication::translate("MainWindow", " \351\207\215\345\217\221\346\227\266\351\227\264", nullptr));
        label_41->setText(QApplication::translate("MainWindow", " \351\207\215\345\217\221\346\254\241\346\225\260", nullptr));
        radioButton_VerSion->setText(QApplication::translate("MainWindow", "\347\211\210  \346\234\254", nullptr));
        label_29->setText(QApplication::translate("MainWindow", "\350\256\276\345\244\207\347\261\273\345\236\213", nullptr));
        label_30->setText(QApplication::translate("MainWindow", "\347\211\210\346\234\254\345\217\267  ", nullptr));
        radioButton_Server->setText(QApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250", nullptr));
        label_36->setText(QApplication::translate("MainWindow", "IP \345\234\260\345\235\200   ", nullptr));
        label_37->setText(QApplication::translate("MainWindow", "\347\253\257\345\217\243\345\217\267    ", nullptr));
        lineEdit_ServerPort->setText(QString());
        label_38->setText(QApplication::translate("MainWindow", "\345\237\237\345\220\215\345\234\260\345\235\200  ", nullptr));
        lineEdit_ServerDNS->setText(QApplication::translate("MainWindow", "https://www.euromega.cn", nullptr));
        radioButton_Zigbee->setText(QApplication::translate("MainWindow", "Zigbee", nullptr));
        label_10->setText(QApplication::translate("MainWindow", " PanID  ", nullptr));
        label_22->setText(QApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207  ", nullptr));
        comboBox_ZigbeeBaud->setItemText(0, QApplication::translate("MainWindow", "2400", nullptr));
        comboBox_ZigbeeBaud->setItemText(1, QApplication::translate("MainWindow", "4800", nullptr));
        comboBox_ZigbeeBaud->setItemText(2, QApplication::translate("MainWindow", "9600", nullptr));
        comboBox_ZigbeeBaud->setItemText(3, QApplication::translate("MainWindow", "19200", nullptr));
        comboBox_ZigbeeBaud->setItemText(4, QApplication::translate("MainWindow", "38400", nullptr));
        comboBox_ZigbeeBaud->setItemText(5, QApplication::translate("MainWindow", "57600", nullptr));
        comboBox_ZigbeeBaud->setItemText(6, QApplication::translate("MainWindow", "115200", nullptr));

        label_14->setText(QApplication::translate("MainWindow", "\346\234\254\346\234\272\345\234\260\345\235\200", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "\347\233\256\346\240\207\345\234\260\345\235\200", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "\351\200\232\344\277\241\351\242\221\351\201\223", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "\346\250\241\345\235\227\347\261\273\345\236\213", nullptr));
        label_23->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\345\212\237\347\216\207", nullptr));
        label_24->setText(QApplication::translate("MainWindow", "\351\207\215\345\217\221\346\254\241\346\225\260", nullptr));
        label_25->setText(QApplication::translate("MainWindow", "\351\207\215\345\217\221\351\227\264\351\232\224", nullptr));
        radioButton_ServerIp->setText(QApplication::translate("MainWindow", "Lan   ", nullptr));
        label_35->setText(QApplication::translate("MainWindow", "\345\212\250\346\200\201IP\346\240\207\345\277\227", nullptr));
        comboBox_DHCP->setItemText(0, QApplication::translate("MainWindow", "\351\235\231\346\200\201", nullptr));
        comboBox_DHCP->setItemText(1, QApplication::translate("MainWindow", "\345\212\250\346\200\201", nullptr));

        label_26->setText(QApplication::translate("MainWindow", "IP \345\234\260   \345\235\200", nullptr));
        lineEdit_LanIP->setText(QString());
        label_34->setText(QApplication::translate("MainWindow", " \345\255\220\347\275\221\346\216\251\347\240\201 ", nullptr));
        lineEdit_MASK->setText(QString());
        label_33->setText(QApplication::translate("MainWindow", " \347\275\221\345\205\263\345\234\260\345\235\200 ", nullptr));
        lineEdit_Router->setText(QString());
        label_32->setText(QApplication::translate("MainWindow", " \347\253\257\345\217\243\345\217\267   ", nullptr));
        lineEdit_LAN_Port->setText(QString());
        label_31->setText(QApplication::translate("MainWindow", "MAC \345\234\260\345\235\200  ", nullptr));
        lineEdit_MAC->setText(QString());
        pushButton_SetInfo->setText(QApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        pushButton_GetInfo->setText(QApplication::translate("MainWindow", " \350\257\273\345\217\226", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "TCP", nullptr));
        lineEdit->setText(QApplication::translate("MainWindow", "3AA3000000012019030410261302002D090152000001180A010000012019030410261302FFFFFFFFFFFF310602030484121314151617191A1B20211C00ECEC", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
