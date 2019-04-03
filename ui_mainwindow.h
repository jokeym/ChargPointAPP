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
    QGridLayout *gridLayout;
    QGroupBox *groupBox_text;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QTabWidget *tabWidget;
    QWidget *tab;
    QComboBox *comboBox_Connetion;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_15;
    QComboBox *comboBox_TCP_Type;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_16;
    QSpacerItem *horizontalSpacer_16;
    QLineEdit *lineEdit_TCP_Addrs;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_17;
    QSpacerItem *horizontalSpacer_17;
    QLineEdit *lineEdit_TCP_Port;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_TCP_Open;
    QPushButton *pushButton_TCP_Send;
    QLabel *label_18;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_15;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_32;
    QRadioButton *radioButton_ServerIp;
    QHBoxLayout *horizontalLayout_31;
    QLabel *label_26;
    QLineEdit *lineEdit_ServerIP;
    QHBoxLayout *horizontalLayout_25;
    QRadioButton *radioButton_Dev;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_7;
    QLineEdit *lineEdit_DevSN;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_6;
    QLineEdit *lineEdit_DevID;
    QHBoxLayout *horizontalLayout_30;
    QRadioButton *radioButton_Zigbee;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_10;
    QLineEdit *lineEdit_PanID;
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
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pushButton_SetSN;
    QPushButton *pushButton_GetSN;
    QLabel *label_22;
    QWidget *tab_2;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox1;
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
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_11;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QSpinBox *spinBox_MastAddr;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_4;
    QSpinBox *spinBox_SlaveAddr;
    QPushButton *pushButton_RS485_ASK;
    QWidget *layoutWidget4;
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
    QGroupBox *groupBox2;
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
    QWidget *layoutWidget5;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *pushButton;
    QPushButton *pushButton_heartbeat;
    QGroupBox *groupBox3;
    QHBoxLayout *horizontalLayout_18;
    QCheckBox *checkBox_AutoSend;
    QSpinBox *spinBox_SendTimeout;
    QTableWidget *tw_Gateway;
    QWidget *tab_6;
    QTableWidget *tw_Lock;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1342, 770);
        MainWindow->setMinimumSize(QSize(0, 0));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox_text = new QGroupBox(centralWidget);
        groupBox_text->setObjectName(QStringLiteral("groupBox_text"));
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


        gridLayout->addWidget(groupBox_text, 0, 2, 1, 1);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setMinimumSize(QSize(800, 0));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        comboBox_Connetion = new QComboBox(tab);
        comboBox_Connetion->addItem(QString());
        comboBox_Connetion->setObjectName(QStringLiteral("comboBox_Connetion"));
        comboBox_Connetion->setGeometry(QRect(350, 70, 180, 20));
        comboBox_Connetion->setMinimumSize(QSize(180, 0));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 70, 239, 124));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_2->addWidget(label_15);

        comboBox_TCP_Type = new QComboBox(layoutWidget);
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
        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName(QStringLiteral("label_16"));

        horizontalLayout_3->addWidget(label_16);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_16);

        lineEdit_TCP_Addrs = new QLineEdit(layoutWidget);
        lineEdit_TCP_Addrs->setObjectName(QStringLiteral("lineEdit_TCP_Addrs"));
        lineEdit_TCP_Addrs->setMinimumSize(QSize(120, 0));

        horizontalLayout_3->addWidget(lineEdit_TCP_Addrs);


        verticalLayout_10->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_17 = new QLabel(layoutWidget);
        label_17->setObjectName(QStringLiteral("label_17"));

        horizontalLayout_4->addWidget(label_17);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_17);

        lineEdit_TCP_Port = new QLineEdit(layoutWidget);
        lineEdit_TCP_Port->setObjectName(QStringLiteral("lineEdit_TCP_Port"));
        lineEdit_TCP_Port->setMinimumSize(QSize(120, 0));

        horizontalLayout_4->addWidget(lineEdit_TCP_Port);


        verticalLayout_10->addLayout(horizontalLayout_4);


        verticalLayout_4->addLayout(verticalLayout_10);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton_TCP_Open = new QPushButton(layoutWidget);
        pushButton_TCP_Open->setObjectName(QStringLiteral("pushButton_TCP_Open"));

        horizontalLayout->addWidget(pushButton_TCP_Open);

        pushButton_TCP_Send = new QPushButton(layoutWidget);
        pushButton_TCP_Send->setObjectName(QStringLiteral("pushButton_TCP_Send"));

        horizontalLayout->addWidget(pushButton_TCP_Send);


        verticalLayout_4->addLayout(horizontalLayout);

        label_18 = new QLabel(tab);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(100, 480, 72, 15));
        layoutWidget1 = new QWidget(tab);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 220, 278, 385));
        verticalLayout_15 = new QVBoxLayout(layoutWidget1);
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget1);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_14 = new QVBoxLayout(groupBox);
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        horizontalLayout_32 = new QHBoxLayout();
        horizontalLayout_32->setSpacing(6);
        horizontalLayout_32->setObjectName(QStringLiteral("horizontalLayout_32"));
        radioButton_ServerIp = new QRadioButton(groupBox);
        radioButton_ServerIp->setObjectName(QStringLiteral("radioButton_ServerIp"));

        horizontalLayout_32->addWidget(radioButton_ServerIp);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setSpacing(6);
        horizontalLayout_31->setObjectName(QStringLiteral("horizontalLayout_31"));
        label_26 = new QLabel(groupBox);
        label_26->setObjectName(QStringLiteral("label_26"));

        horizontalLayout_31->addWidget(label_26);

        lineEdit_ServerIP = new QLineEdit(groupBox);
        lineEdit_ServerIP->setObjectName(QStringLiteral("lineEdit_ServerIP"));

        horizontalLayout_31->addWidget(lineEdit_ServerIP);


        horizontalLayout_32->addLayout(horizontalLayout_31);


        verticalLayout_14->addLayout(horizontalLayout_32);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setSpacing(6);
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        radioButton_Dev = new QRadioButton(groupBox);
        radioButton_Dev->setObjectName(QStringLiteral("radioButton_Dev"));
        radioButton_Dev->setChecked(true);

        horizontalLayout_25->addWidget(radioButton_Dev);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_20->addWidget(label_7);

        lineEdit_DevSN = new QLineEdit(groupBox);
        lineEdit_DevSN->setObjectName(QStringLiteral("lineEdit_DevSN"));

        horizontalLayout_20->addWidget(lineEdit_DevSN);


        verticalLayout_12->addLayout(horizontalLayout_20);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_19->addWidget(label_6);

        lineEdit_DevID = new QLineEdit(groupBox);
        lineEdit_DevID->setObjectName(QStringLiteral("lineEdit_DevID"));

        horizontalLayout_19->addWidget(lineEdit_DevID);


        verticalLayout_12->addLayout(horizontalLayout_19);


        horizontalLayout_25->addLayout(verticalLayout_12);


        verticalLayout_14->addLayout(horizontalLayout_25);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setSpacing(6);
        horizontalLayout_30->setObjectName(QStringLiteral("horizontalLayout_30"));
        radioButton_Zigbee = new QRadioButton(groupBox);
        radioButton_Zigbee->setObjectName(QStringLiteral("radioButton_Zigbee"));

        horizontalLayout_30->addWidget(radioButton_Zigbee);

        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_21->addWidget(label_10);

        lineEdit_PanID = new QLineEdit(groupBox);
        lineEdit_PanID->setObjectName(QStringLiteral("lineEdit_PanID"));

        horizontalLayout_21->addWidget(lineEdit_PanID);


        verticalLayout_13->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_22->addWidget(label_14);

        lineEdit_Myaddr = new QLineEdit(groupBox);
        lineEdit_Myaddr->setObjectName(QStringLiteral("lineEdit_Myaddr"));

        horizontalLayout_22->addWidget(lineEdit_Myaddr);


        verticalLayout_13->addLayout(horizontalLayout_22);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        label_20 = new QLabel(groupBox);
        label_20->setObjectName(QStringLiteral("label_20"));

        horizontalLayout_24->addWidget(label_20);

        lineEdit_TargetAddr = new QLineEdit(groupBox);
        lineEdit_TargetAddr->setObjectName(QStringLiteral("lineEdit_TargetAddr"));

        horizontalLayout_24->addWidget(lineEdit_TargetAddr);


        verticalLayout_13->addLayout(horizontalLayout_24);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setSpacing(6);
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QStringLiteral("label_19"));

        horizontalLayout_23->addWidget(label_19);

        spinBox_Chan = new QSpinBox(groupBox);
        spinBox_Chan->setObjectName(QStringLiteral("spinBox_Chan"));
        spinBox_Chan->setMinimumSize(QSize(120, 0));
        spinBox_Chan->setMinimum(11);
        spinBox_Chan->setMaximum(26);
        spinBox_Chan->setValue(15);

        horizontalLayout_23->addWidget(spinBox_Chan);


        verticalLayout_13->addLayout(horizontalLayout_23);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setSpacing(6);
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        label_21 = new QLabel(groupBox);
        label_21->setObjectName(QStringLiteral("label_21"));

        horizontalLayout_26->addWidget(label_21);

        lineEdit_ModuleType = new QLineEdit(groupBox);
        lineEdit_ModuleType->setObjectName(QStringLiteral("lineEdit_ModuleType"));

        horizontalLayout_26->addWidget(lineEdit_ModuleType);


        verticalLayout_13->addLayout(horizontalLayout_26);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setSpacing(6);
        horizontalLayout_27->setObjectName(QStringLiteral("horizontalLayout_27"));
        label_23 = new QLabel(groupBox);
        label_23->setObjectName(QStringLiteral("label_23"));

        horizontalLayout_27->addWidget(label_23);

        lineEdit_SendPower = new QLineEdit(groupBox);
        lineEdit_SendPower->setObjectName(QStringLiteral("lineEdit_SendPower"));

        horizontalLayout_27->addWidget(lineEdit_SendPower);


        verticalLayout_13->addLayout(horizontalLayout_27);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setSpacing(6);
        horizontalLayout_28->setObjectName(QStringLiteral("horizontalLayout_28"));
        label_24 = new QLabel(groupBox);
        label_24->setObjectName(QStringLiteral("label_24"));

        horizontalLayout_28->addWidget(label_24);

        lineEdit_SendRetryCount = new QLineEdit(groupBox);
        lineEdit_SendRetryCount->setObjectName(QStringLiteral("lineEdit_SendRetryCount"));

        horizontalLayout_28->addWidget(lineEdit_SendRetryCount);


        verticalLayout_13->addLayout(horizontalLayout_28);

        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setSpacing(6);
        horizontalLayout_29->setObjectName(QStringLiteral("horizontalLayout_29"));
        label_25 = new QLabel(groupBox);
        label_25->setObjectName(QStringLiteral("label_25"));

        horizontalLayout_29->addWidget(label_25);

        lineEdit_RetryTimeout = new QLineEdit(groupBox);
        lineEdit_RetryTimeout->setObjectName(QStringLiteral("lineEdit_RetryTimeout"));

        horizontalLayout_29->addWidget(lineEdit_RetryTimeout);


        verticalLayout_13->addLayout(horizontalLayout_29);


        horizontalLayout_30->addLayout(verticalLayout_13);


        verticalLayout_14->addLayout(horizontalLayout_30);


        verticalLayout_15->addWidget(groupBox);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        pushButton_SetSN = new QPushButton(layoutWidget1);
        pushButton_SetSN->setObjectName(QStringLiteral("pushButton_SetSN"));

        horizontalLayout_10->addWidget(pushButton_SetSN);

        pushButton_GetSN = new QPushButton(layoutWidget1);
        pushButton_GetSN->setObjectName(QStringLiteral("pushButton_GetSN"));

        horizontalLayout_10->addWidget(pushButton_GetSN);


        verticalLayout_15->addLayout(horizontalLayout_10);

        label_22 = new QLabel(tab);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(-250, 200, 72, 15));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        layoutWidget2 = new QWidget(tab_2);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(80, 120, 161, 192));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        groupBox1 = new QGroupBox(layoutWidget2);
        groupBox1->setObjectName(QStringLiteral("groupBox1"));
        verticalLayout_9 = new QVBoxLayout(groupBox1);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        pushButton_Open = new QPushButton(groupBox1);
        pushButton_Open->setObjectName(QStringLiteral("pushButton_Open"));

        verticalLayout_5->addWidget(pushButton_Open);

        PortBox = new QComboBox(groupBox1);
        PortBox->setObjectName(QStringLiteral("PortBox"));
        PortBox->setMaxVisibleItems(10);

        verticalLayout_5->addWidget(PortBox);


        verticalLayout_9->addLayout(verticalLayout_5);


        verticalLayout_3->addWidget(groupBox1);

        groupBox_PortInfo = new QGroupBox(layoutWidget2);
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
        layoutWidget3 = new QWidget(tab_4);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(160, 50, 221, 119));
        verticalLayout_11 = new QVBoxLayout(layoutWidget3);
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
        label_3 = new QLabel(layoutWidget3);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_7->addWidget(label_3);

        spinBox_MastAddr = new QSpinBox(layoutWidget3);
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
        label_4 = new QLabel(layoutWidget3);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_8->addWidget(label_4);

        spinBox_SlaveAddr = new QSpinBox(layoutWidget3);
        spinBox_SlaveAddr->setObjectName(QStringLiteral("spinBox_SlaveAddr"));
        spinBox_SlaveAddr->setMaximum(255);
        spinBox_SlaveAddr->setValue(0);

        horizontalLayout_8->addWidget(spinBox_SlaveAddr);


        verticalLayout_11->addLayout(horizontalLayout_8);

        pushButton_RS485_ASK = new QPushButton(layoutWidget3);
        pushButton_RS485_ASK->setObjectName(QStringLiteral("pushButton_RS485_ASK"));

        verticalLayout_11->addWidget(pushButton_RS485_ASK);

        layoutWidget4 = new QWidget(tab_4);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(50, 210, 221, 151));
        verticalLayout_6 = new QVBoxLayout(layoutWidget4);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_5 = new QLabel(layoutWidget4);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_9->addWidget(label_5);

        spinBox_DevNums = new QSpinBox(layoutWidget4);
        spinBox_DevNums->setObjectName(QStringLiteral("spinBox_DevNums"));

        horizontalLayout_9->addWidget(spinBox_DevNums);


        verticalLayout_6->addLayout(horizontalLayout_9);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label = new QLabel(layoutWidget4);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_5->addWidget(label);

        lineEdit_DC_Vol = new QLineEdit(layoutWidget4);
        lineEdit_DC_Vol->setObjectName(QStringLiteral("lineEdit_DC_Vol"));

        horizontalLayout_5->addWidget(lineEdit_DC_Vol);


        verticalLayout_6->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_2 = new QLabel(layoutWidget4);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_6->addWidget(label_2);

        lineEdit_VBAT_Vol = new QLineEdit(layoutWidget4);
        lineEdit_VBAT_Vol->setObjectName(QStringLiteral("lineEdit_VBAT_Vol"));

        horizontalLayout_6->addWidget(lineEdit_VBAT_Vol);


        verticalLayout_6->addLayout(horizontalLayout_6);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        lineEdit_2 = new QLineEdit(tab_5);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(-160, 30, 113, 21));
        groupBox2 = new QGroupBox(tab_5);
        groupBox2->setObjectName(QStringLiteral("groupBox2"));
        groupBox2->setGeometry(QRect(40, 20, 271, 121));
        verticalLayout_17 = new QVBoxLayout(groupBox2);
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setContentsMargins(11, 11, 11, 11);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_8 = new QLabel(groupBox2);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_12->addWidget(label_8);

        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        radioButton_Net = new QRadioButton(groupBox2);
        radioButton_Net->setObjectName(QStringLiteral("radioButton_Net"));

        verticalLayout_16->addWidget(radioButton_Net);

        radioButton_WiFi = new QRadioButton(groupBox2);
        radioButton_WiFi->setObjectName(QStringLiteral("radioButton_WiFi"));

        verticalLayout_16->addWidget(radioButton_WiFi);

        radioButton_GPRS = new QRadioButton(groupBox2);
        radioButton_GPRS->setObjectName(QStringLiteral("radioButton_GPRS"));
        radioButton_GPRS->setChecked(true);

        verticalLayout_16->addWidget(radioButton_GPRS);


        horizontalLayout_12->addLayout(verticalLayout_16);


        verticalLayout_17->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_9 = new QLabel(groupBox2);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_13->addWidget(label_9);

        spinBox_vbat = new QSpinBox(groupBox2);
        spinBox_vbat->setObjectName(QStringLiteral("spinBox_vbat"));
        spinBox_vbat->setMaximum(100);
        spinBox_vbat->setValue(76);

        horizontalLayout_13->addWidget(spinBox_vbat);


        verticalLayout_17->addLayout(horizontalLayout_13);

        layoutWidget5 = new QWidget(tab_5);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(350, 30, 266, 101));
        gridLayout_2 = new QGridLayout(layoutWidget5);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        pushButton = new QPushButton(layoutWidget5);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout_11->addWidget(pushButton);

        pushButton_heartbeat = new QPushButton(layoutWidget5);
        pushButton_heartbeat->setObjectName(QStringLiteral("pushButton_heartbeat"));

        horizontalLayout_11->addWidget(pushButton_heartbeat);


        gridLayout_2->addLayout(horizontalLayout_11, 0, 0, 1, 1);

        groupBox3 = new QGroupBox(layoutWidget5);
        groupBox3->setObjectName(QStringLiteral("groupBox3"));
        horizontalLayout_18 = new QHBoxLayout(groupBox3);
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        checkBox_AutoSend = new QCheckBox(groupBox3);
        checkBox_AutoSend->setObjectName(QStringLiteral("checkBox_AutoSend"));

        horizontalLayout_18->addWidget(checkBox_AutoSend);

        spinBox_SendTimeout = new QSpinBox(groupBox3);
        spinBox_SendTimeout->setObjectName(QStringLiteral("spinBox_SendTimeout"));
        spinBox_SendTimeout->setMaximum(10000);
        spinBox_SendTimeout->setValue(5);

        horizontalLayout_18->addWidget(spinBox_SendTimeout);


        gridLayout_2->addWidget(groupBox3, 1, 0, 1, 1);

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

        gridLayout->addWidget(tabWidget, 0, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1342, 23));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "WiFiTCP \346\265\213\350\257\225", nullptr));
        lineEdit->setText(QApplication::translate("MainWindow", "3AA3000000012019030410261302002D090152000001180A010000012019030410261302FFFFFFFFFFFF310602030484121314151617191A1B20211C00ECEC", nullptr));
        comboBox_Connetion->setItemText(0, QApplication::translate("MainWindow", "\345\205\250\351\203\250\350\277\236\346\216\245", nullptr));

        label_15->setText(QApplication::translate("MainWindow", "\345\215\217\350\256\256\347\261\273\345\236\213", nullptr));
        comboBox_TCP_Type->setItemText(0, QApplication::translate("MainWindow", "TCP Server", nullptr));
        comboBox_TCP_Type->setItemText(1, QApplication::translate("MainWindow", "TCP Client", nullptr));
        comboBox_TCP_Type->setItemText(2, QApplication::translate("MainWindow", "UDP", nullptr));

        label_16->setText(QApplication::translate("MainWindow", "IP \345\234\260\345\235\200", nullptr));
        lineEdit_TCP_Addrs->setText(QApplication::translate("MainWindow", "192.168.1.6", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "\347\253\257   \345\217\243", nullptr));
        lineEdit_TCP_Port->setText(QApplication::translate("MainWindow", "7519", nullptr));
        pushButton_TCP_Open->setText(QApplication::translate("MainWindow", "\347\233\221\345\220\254", nullptr));
        pushButton_TCP_Send->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        label_18->setText(QString());
        radioButton_ServerIp->setText(QApplication::translate("MainWindow", "\346\234\215\345\212\241\345\231\250", nullptr));
        label_26->setText(QApplication::translate("MainWindow", "\345\234\260   \345\235\200", nullptr));
        radioButton_Dev->setText(QApplication::translate("MainWindow", " \350\256\276 \345\244\207", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\345\272\217\345\210\227\345\217\267 ", nullptr));
        lineEdit_DevSN->setText(QApplication::translate("MainWindow", "0000000000000000", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\350\256\276\345\244\207\345\234\260\345\235\200", nullptr));
        radioButton_Zigbee->setText(QApplication::translate("MainWindow", "Zigbee", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "PanID  ", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "\346\234\254\346\234\272\345\234\260\345\235\200", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "\347\233\256\346\240\207\345\234\260\345\235\200", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "\351\200\232\344\277\241\351\242\221\351\201\223", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "\346\250\241\345\235\227\347\261\273\345\236\213", nullptr));
        label_23->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\345\212\237\347\216\207", nullptr));
        label_24->setText(QApplication::translate("MainWindow", "\351\207\215\345\217\221\346\254\241\346\225\260", nullptr));
        label_25->setText(QApplication::translate("MainWindow", "\351\207\215\345\217\221\351\227\264\351\232\224", nullptr));
        pushButton_SetSN->setText(QApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        pushButton_GetSN->setText(QApplication::translate("MainWindow", " \350\257\273\345\217\226", nullptr));
        label_22->setText(QApplication::translate("MainWindow", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "TCP", nullptr));
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
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
