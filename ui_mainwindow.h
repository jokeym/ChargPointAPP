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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDoubleSpinBox>
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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox_Port;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButton_Open;
    QComboBox *PortBox;
    QSpacerItem *verticalSpacer_4;
    QGroupBox *groupBox_PortInfo;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton_Clean;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_Send;
    QGroupBox *groupBox_text;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QGroupBox *groupBox_Activation;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_9;
    QLineEdit *lineEdit_UUID;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_12;
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
    QGroupBox *groupBox1;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox2;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_6;
    QDateTimeEdit *Now_dateTimeEdit;
    QGroupBox *groupBox_ResidueCnt;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit_ResidueCnt;
    QGroupBox *groupBox4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit_NowPower;
    QGroupBox *groupBox5;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *lineEdit_MinPower;
    QGroupBox *groupBox6;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *lineEdit_MaxPower;
    QGroupBox *groupBox7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QDateTimeEdit *Set_dateTimeEdit;
    QGroupBox *groupBox8;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QDoubleSpinBox *doubleSpinBox_MinCurrent;
    QGroupBox *groupBox9;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QDoubleSpinBox *doubleSpinBox_MaxCurrent;
    QGroupBox *groupBox10;
    QHBoxLayout *horizontalLayout_13;
    QRadioButton *radioButton_RestartFlag;
    QGroupBox *groupBox11;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox12;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_5;
    QDoubleSpinBox *doubleSpinBox_ReStartHour;
    QGroupBox *groupBox13;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_8;
    QDoubleSpinBox *doubleSpinBox_ReStartIntervalTime;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_GetCtrl;
    QPushButton *pushButton_SetCtrl;
    QMenuBar *menuBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(870, 754);
        MainWindow->setMinimumSize(QSize(800, 445));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        groupBox_Port = new QGroupBox(groupBox);
        groupBox_Port->setObjectName(QStringLiteral("groupBox_Port"));
        verticalLayout_5 = new QVBoxLayout(groupBox_Port);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        pushButton_Open = new QPushButton(groupBox_Port);
        pushButton_Open->setObjectName(QStringLiteral("pushButton_Open"));

        verticalLayout_5->addWidget(pushButton_Open);

        PortBox = new QComboBox(groupBox_Port);
        PortBox->setObjectName(QStringLiteral("PortBox"));
        PortBox->setMaxVisibleItems(10);

        verticalLayout_5->addWidget(PortBox);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_4);

        groupBox_PortInfo = new QGroupBox(groupBox_Port);
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


        verticalLayout_5->addWidget(groupBox_PortInfo);


        horizontalLayout->addWidget(groupBox_Port);

        groupBox_text = new QGroupBox(groupBox);
        groupBox_text->setObjectName(QStringLiteral("groupBox_text"));
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


        horizontalLayout->addWidget(groupBox_text);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_Activation = new QGroupBox(centralWidget);
        groupBox_Activation->setObjectName(QStringLiteral("groupBox_Activation"));
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


        gridLayout->addWidget(groupBox_Activation, 1, 0, 1, 1);

        groupBox1 = new QGroupBox(centralWidget);
        groupBox1->setObjectName(QStringLiteral("groupBox1"));
        groupBox1->setMinimumSize(QSize(450, 650));
        verticalLayout_4 = new QVBoxLayout(groupBox1);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        groupBox2 = new QGroupBox(groupBox1);
        groupBox2->setObjectName(QStringLiteral("groupBox2"));
        verticalLayout_3 = new QVBoxLayout(groupBox2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox3 = new QGroupBox(groupBox2);
        groupBox3->setObjectName(QStringLiteral("groupBox3"));
        horizontalLayout_9 = new QHBoxLayout(groupBox3);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_6 = new QLabel(groupBox3);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_9->addWidget(label_6);

        Now_dateTimeEdit = new QDateTimeEdit(groupBox3);
        Now_dateTimeEdit->setObjectName(QStringLiteral("Now_dateTimeEdit"));
        Now_dateTimeEdit->setReadOnly(true);

        horizontalLayout_9->addWidget(Now_dateTimeEdit);


        verticalLayout_3->addWidget(groupBox3);

        groupBox_ResidueCnt = new QGroupBox(groupBox2);
        groupBox_ResidueCnt->setObjectName(QStringLiteral("groupBox_ResidueCnt"));
        horizontalLayout_8 = new QHBoxLayout(groupBox_ResidueCnt);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_5 = new QLabel(groupBox_ResidueCnt);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_8->addWidget(label_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        lineEdit_ResidueCnt = new QLineEdit(groupBox_ResidueCnt);
        lineEdit_ResidueCnt->setObjectName(QStringLiteral("lineEdit_ResidueCnt"));
        lineEdit_ResidueCnt->setReadOnly(true);

        horizontalLayout_8->addWidget(lineEdit_ResidueCnt);


        verticalLayout_3->addWidget(groupBox_ResidueCnt);

        groupBox4 = new QGroupBox(groupBox2);
        groupBox4->setObjectName(QStringLiteral("groupBox4"));
        horizontalLayout_2 = new QHBoxLayout(groupBox4);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(groupBox4);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        lineEdit_NowPower = new QLineEdit(groupBox4);
        lineEdit_NowPower->setObjectName(QStringLiteral("lineEdit_NowPower"));
        lineEdit_NowPower->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit_NowPower);


        verticalLayout_3->addWidget(groupBox4);

        groupBox5 = new QGroupBox(groupBox2);
        groupBox5->setObjectName(QStringLiteral("groupBox5"));
        horizontalLayout_11 = new QHBoxLayout(groupBox5);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_8 = new QLabel(groupBox5);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_11->addWidget(label_8);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_6);

        lineEdit_MinPower = new QLineEdit(groupBox5);
        lineEdit_MinPower->setObjectName(QStringLiteral("lineEdit_MinPower"));
        lineEdit_MinPower->setReadOnly(true);

        horizontalLayout_11->addWidget(lineEdit_MinPower);


        verticalLayout_3->addWidget(groupBox5);

        groupBox6 = new QGroupBox(groupBox2);
        groupBox6->setObjectName(QStringLiteral("groupBox6"));
        horizontalLayout_10 = new QHBoxLayout(groupBox6);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_7 = new QLabel(groupBox6);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_10->addWidget(label_7);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_7);

        lineEdit_MaxPower = new QLineEdit(groupBox6);
        lineEdit_MaxPower->setObjectName(QStringLiteral("lineEdit_MaxPower"));
        lineEdit_MaxPower->setReadOnly(true);

        horizontalLayout_10->addWidget(lineEdit_MaxPower);


        verticalLayout_3->addWidget(groupBox6);

        groupBox7 = new QGroupBox(groupBox2);
        groupBox7->setObjectName(QStringLiteral("groupBox7"));
        horizontalLayout_6 = new QHBoxLayout(groupBox7);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_3 = new QLabel(groupBox7);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_6->addWidget(label_3);

        Set_dateTimeEdit = new QDateTimeEdit(groupBox7);
        Set_dateTimeEdit->setObjectName(QStringLiteral("Set_dateTimeEdit"));
        Set_dateTimeEdit->setDateTime(QDateTime(QDate(2018, 12, 7), QTime(18, 30, 0)));

        horizontalLayout_6->addWidget(Set_dateTimeEdit);


        verticalLayout_3->addWidget(groupBox7);

        groupBox8 = new QGroupBox(groupBox2);
        groupBox8->setObjectName(QStringLiteral("groupBox8"));
        horizontalLayout_3 = new QHBoxLayout(groupBox8);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(groupBox8);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        doubleSpinBox_MinCurrent = new QDoubleSpinBox(groupBox8);
        doubleSpinBox_MinCurrent->setObjectName(QStringLiteral("doubleSpinBox_MinCurrent"));
        doubleSpinBox_MinCurrent->setMinimumSize(QSize(60, 0));
        doubleSpinBox_MinCurrent->setDecimals(2);
        doubleSpinBox_MinCurrent->setMinimum(0.01);
        doubleSpinBox_MinCurrent->setMaximum(5);
        doubleSpinBox_MinCurrent->setSingleStep(0.01);
        doubleSpinBox_MinCurrent->setValue(0.04);

        horizontalLayout_3->addWidget(doubleSpinBox_MinCurrent);


        verticalLayout_3->addWidget(groupBox8);

        groupBox9 = new QGroupBox(groupBox2);
        groupBox9->setObjectName(QStringLiteral("groupBox9"));
        horizontalLayout_4 = new QHBoxLayout(groupBox9);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_2 = new QLabel(groupBox9);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_4->addWidget(label_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        doubleSpinBox_MaxCurrent = new QDoubleSpinBox(groupBox9);
        doubleSpinBox_MaxCurrent->setObjectName(QStringLiteral("doubleSpinBox_MaxCurrent"));
        doubleSpinBox_MaxCurrent->setMinimumSize(QSize(60, 0));
        doubleSpinBox_MaxCurrent->setMinimum(0.01);
        doubleSpinBox_MaxCurrent->setMaximum(5);
        doubleSpinBox_MaxCurrent->setSingleStep(0.01);
        doubleSpinBox_MaxCurrent->setValue(2.5);

        horizontalLayout_4->addWidget(doubleSpinBox_MaxCurrent);


        verticalLayout_3->addWidget(groupBox9);

        groupBox10 = new QGroupBox(groupBox2);
        groupBox10->setObjectName(QStringLiteral("groupBox10"));
        horizontalLayout_13 = new QHBoxLayout(groupBox10);
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        radioButton_RestartFlag = new QRadioButton(groupBox10);
        radioButton_RestartFlag->setObjectName(QStringLiteral("radioButton_RestartFlag"));

        horizontalLayout_13->addWidget(radioButton_RestartFlag);

        groupBox11 = new QGroupBox(groupBox10);
        groupBox11->setObjectName(QStringLiteral("groupBox11"));
        verticalLayout_6 = new QVBoxLayout(groupBox11);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        groupBox12 = new QGroupBox(groupBox11);
        groupBox12->setObjectName(QStringLiteral("groupBox12"));
        horizontalLayout_5 = new QHBoxLayout(groupBox12);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_9 = new QLabel(groupBox12);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_5->addWidget(label_9);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        doubleSpinBox_ReStartHour = new QDoubleSpinBox(groupBox12);
        doubleSpinBox_ReStartHour->setObjectName(QStringLiteral("doubleSpinBox_ReStartHour"));
        doubleSpinBox_ReStartHour->setMinimumSize(QSize(60, 0));
        doubleSpinBox_ReStartHour->setDecimals(0);
        doubleSpinBox_ReStartHour->setMinimum(1);
        doubleSpinBox_ReStartHour->setMaximum(6);
        doubleSpinBox_ReStartHour->setValue(3);

        horizontalLayout_5->addWidget(doubleSpinBox_ReStartHour);


        verticalLayout_6->addWidget(groupBox12);

        groupBox13 = new QGroupBox(groupBox11);
        groupBox13->setObjectName(QStringLiteral("groupBox13"));
        horizontalLayout_12 = new QHBoxLayout(groupBox13);
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_10 = new QLabel(groupBox13);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_12->addWidget(label_10);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_8);

        doubleSpinBox_ReStartIntervalTime = new QDoubleSpinBox(groupBox13);
        doubleSpinBox_ReStartIntervalTime->setObjectName(QStringLiteral("doubleSpinBox_ReStartIntervalTime"));
        doubleSpinBox_ReStartIntervalTime->setMinimumSize(QSize(60, 0));
        doubleSpinBox_ReStartIntervalTime->setDecimals(0);
        doubleSpinBox_ReStartIntervalTime->setMinimum(1);
        doubleSpinBox_ReStartIntervalTime->setMaximum(30);
        doubleSpinBox_ReStartIntervalTime->setValue(5);

        horizontalLayout_12->addWidget(doubleSpinBox_ReStartIntervalTime);


        verticalLayout_6->addWidget(groupBox13);


        horizontalLayout_13->addWidget(groupBox11);


        verticalLayout_3->addWidget(groupBox10);


        verticalLayout_4->addWidget(groupBox2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        pushButton_GetCtrl = new QPushButton(groupBox1);
        pushButton_GetCtrl->setObjectName(QStringLiteral("pushButton_GetCtrl"));

        horizontalLayout_7->addWidget(pushButton_GetCtrl);

        pushButton_SetCtrl = new QPushButton(groupBox1);
        pushButton_SetCtrl->setObjectName(QStringLiteral("pushButton_SetCtrl"));

        horizontalLayout_7->addWidget(pushButton_SetCtrl);


        verticalLayout_4->addLayout(horizontalLayout_7);


        gridLayout->addWidget(groupBox1, 0, 1, 2, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 870, 23));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\344\272\224\347\202\271\347\247\221\346\212\200\346\231\272\350\203\275\345\205\205\347\224\265\346\241\251", nullptr));
        pushButton_Open->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", nullptr));
        pushButton_Clean->setText(QApplication::translate("MainWindow", "\346\270\205\351\231\244", nullptr));
        pushButton_Send->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201", nullptr));
        lineEdit->setText(QApplication::translate("MainWindow", "$CHARGE,CONNECT,1*75", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "\350\256\276\345\244\207UUID", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "\345\210\260\346\234\237\346\227\266\351\227\264", nullptr));
#ifndef QT_NO_TOOLTIP
        dateTimeEdit_KeyExpirationTime->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; color:#ff0000;\">\350\256\276\345\244\207\347\232\204\344\275\277\347\224\250\346\210\252\350\207\263\346\234\237\351\231\220</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        dateTimeEdit_KeyExpirationTime->setDisplayFormat(QApplication::translate("MainWindow", "yyyy-MM-dd HH:mm:ss", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "\346\277\200\346\264\273\345\257\206\351\222\245", nullptr));
        pushButton_GetUUID->setText(QApplication::translate("MainWindow", "\350\216\267\345\217\226UUID", nullptr));
        pushButton_CreateKey->setText(QApplication::translate("MainWindow", "\347\224\237\346\210\220\345\257\206\351\222\245", nullptr));
        pushButton_WriteKey->setText(QApplication::translate("MainWindow", "\345\206\231\345\205\245\345\257\206\351\222\245", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "\347\216\260\345\234\250RTC\346\227\266\351\227\264", nullptr));
        Now_dateTimeEdit->setDisplayFormat(QApplication::translate("MainWindow", "yyyy-MM-dd HH:mm:ss", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\345\211\251\344\275\231\346\254\241\346\225\260", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\345\256\236\351\231\205\345\212\237\347\216\207", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "\346\234\200\345\260\217\345\212\237\347\216\207/W", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\346\234\200\345\244\247\345\212\237\347\216\207/W", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256RTC\346\227\266\351\227\264", nullptr));
        Set_dateTimeEdit->setDisplayFormat(QApplication::translate("MainWindow", "yyyy-MM-dd HH:mm:ss", nullptr));
        label->setText(QApplication::translate("MainWindow", "\346\234\200\345\260\217\347\224\265\346\265\201/A", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\346\234\200\345\244\247\347\224\265\346\265\201/A", nullptr));
#ifndef QT_NO_TOOLTIP
        radioButton_RestartFlag->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; color:#ff0000;\">\351\200\211\344\270\255\345\210\231\350\241\250\347\244\272\345\274\200\345\220\257\345\244\234\351\227\264\351\207\215\345\220\257\345\212\237\350\203\275</span></p><p align=\"center\"><span style=\" font-size:18pt; color:#ff0000;\">\344\270\215\351\200\211\345\210\231\350\241\250\347\244\272\345\217\226\346\266\210\345\244\234\351\227\264\351\207\215\345\220\257\345\212\237\350\203\275</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        radioButton_RestartFlag->setText(QApplication::translate("MainWindow", "\345\244\234\351\227\264\351\200\232\351\201\223\351\207\215\345\220\257\345\274\200\345\205\263", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "\351\207\215\345\220\257\346\227\266\351\227\264/\346\227\266", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "\351\227\264\351\232\224\346\227\266\351\227\264/\345\210\206", nullptr));
        pushButton_GetCtrl->setText(QApplication::translate("MainWindow", "\350\216\267\345\217\226", nullptr));
        pushButton_SetCtrl->setText(QApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
