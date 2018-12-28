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
    QGroupBox *groupBox1;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_6;
    QDateTimeEdit *Now_dateTimeEdit;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit_ResidueCnt;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit_NowPower;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *lineEdit_MinPower;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *lineEdit_MaxPower;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QDateTimeEdit *Set_dateTimeEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_3;
    QDoubleSpinBox *doubleSpinBox_MinCurrent;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QDoubleSpinBox *doubleSpinBox_MaxCurrent;
    QHBoxLayout *horizontalLayout_5;
    QRadioButton *radioButton_RestartFlag;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *lineEdit_ResetTime;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_GetCtrl;
    QPushButton *pushButton_SetCtrl;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(904, 647);
        MainWindow->setMinimumSize(QSize(800, 445));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(11, 11, 452, 339));
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

        groupBox1 = new QGroupBox(centralWidget);
        groupBox1->setObjectName(QStringLiteral("groupBox1"));
        groupBox1->setGeometry(QRect(470, 11, 361, 501));
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
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_6 = new QLabel(groupBox2);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_9->addWidget(label_6);

        Now_dateTimeEdit = new QDateTimeEdit(groupBox2);
        Now_dateTimeEdit->setObjectName(QStringLiteral("Now_dateTimeEdit"));
        Now_dateTimeEdit->setReadOnly(false);

        horizontalLayout_9->addWidget(Now_dateTimeEdit);


        verticalLayout_3->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_5 = new QLabel(groupBox2);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_8->addWidget(label_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        lineEdit_ResidueCnt = new QLineEdit(groupBox2);
        lineEdit_ResidueCnt->setObjectName(QStringLiteral("lineEdit_ResidueCnt"));
        lineEdit_ResidueCnt->setReadOnly(true);

        horizontalLayout_8->addWidget(lineEdit_ResidueCnt);


        verticalLayout_3->addLayout(horizontalLayout_8);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(groupBox2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        lineEdit_NowPower = new QLineEdit(groupBox2);
        lineEdit_NowPower->setObjectName(QStringLiteral("lineEdit_NowPower"));
        lineEdit_NowPower->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit_NowPower);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_8 = new QLabel(groupBox2);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_11->addWidget(label_8);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_6);

        lineEdit_MinPower = new QLineEdit(groupBox2);
        lineEdit_MinPower->setObjectName(QStringLiteral("lineEdit_MinPower"));

        horizontalLayout_11->addWidget(lineEdit_MinPower);


        verticalLayout_3->addLayout(horizontalLayout_11);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_7 = new QLabel(groupBox2);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_10->addWidget(label_7);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_7);

        lineEdit_MaxPower = new QLineEdit(groupBox2);
        lineEdit_MaxPower->setObjectName(QStringLiteral("lineEdit_MaxPower"));

        horizontalLayout_10->addWidget(lineEdit_MaxPower);


        verticalLayout_3->addLayout(horizontalLayout_10);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_3 = new QLabel(groupBox2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_6->addWidget(label_3);

        Set_dateTimeEdit = new QDateTimeEdit(groupBox2);
        Set_dateTimeEdit->setObjectName(QStringLiteral("Set_dateTimeEdit"));
        Set_dateTimeEdit->setDateTime(QDateTime(QDate(2018, 12, 7), QTime(18, 30, 0)));

        horizontalLayout_6->addWidget(Set_dateTimeEdit);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(groupBox2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        doubleSpinBox_MinCurrent = new QDoubleSpinBox(groupBox2);
        doubleSpinBox_MinCurrent->setObjectName(QStringLiteral("doubleSpinBox_MinCurrent"));
        doubleSpinBox_MinCurrent->setDecimals(2);
        doubleSpinBox_MinCurrent->setMinimum(0.01);
        doubleSpinBox_MinCurrent->setMaximum(5);
        doubleSpinBox_MinCurrent->setValue(0.01);

        horizontalLayout_3->addWidget(doubleSpinBox_MinCurrent);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_2 = new QLabel(groupBox2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_4->addWidget(label_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        doubleSpinBox_MaxCurrent = new QDoubleSpinBox(groupBox2);
        doubleSpinBox_MaxCurrent->setObjectName(QStringLiteral("doubleSpinBox_MaxCurrent"));
        doubleSpinBox_MaxCurrent->setMinimum(0.01);
        doubleSpinBox_MaxCurrent->setMaximum(5);
        doubleSpinBox_MaxCurrent->setValue(2.5);

        horizontalLayout_4->addWidget(doubleSpinBox_MaxCurrent);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        radioButton_RestartFlag = new QRadioButton(groupBox2);
        radioButton_RestartFlag->setObjectName(QStringLiteral("radioButton_RestartFlag"));

        horizontalLayout_5->addWidget(radioButton_RestartFlag);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        lineEdit_ResetTime = new QLineEdit(groupBox2);
        lineEdit_ResetTime->setObjectName(QStringLiteral("lineEdit_ResetTime"));

        horizontalLayout_5->addWidget(lineEdit_ResetTime);


        verticalLayout_3->addLayout(horizontalLayout_5);


        verticalLayout_4->addWidget(groupBox2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

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

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 904, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

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
        radioButton_RestartFlag->setText(QApplication::translate("MainWindow", "\351\207\215\345\220\257\346\227\266\351\227\264/h ", nullptr));
#ifndef QT_NO_TOOLTIP
        lineEdit_ResetTime->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; color:#ff0000;\">\345\205\201\350\256\270\350\256\276\347\275\256\347\232\204\351\207\215\345\220\257\346\227\266\351\227\264\344\270\272\357\274\232 1~23\347\202\271</span></p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        pushButton_GetCtrl->setText(QApplication::translate("MainWindow", "\350\216\267\345\217\226", nullptr));
        pushButton_SetCtrl->setText(QApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
