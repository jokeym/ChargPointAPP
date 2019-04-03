#-------------------------------------------------
#
# Project created by QtCreator 2018-11-26T11:20:13
#
#-------------------------------------------------

QT       += core gui serialport network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = OMJ
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp

HEADERS += \
        mainwindow.h

FORMS += \
        mainwindow.ui

RESOURCES += \
    images/images.qrc \
    images/images.qrc \
    images/images.qrc

DISTFILES += \
    images/header.bmp \
    images/lcd.bmp \
    images/loadfile.png \
    images/logo42-22.png \
    images/logo129-66.png \
    images/mesage.png \
    images/open.png \
    images/save.png \
    images/send.png \
    images/stop.png \
    images/write2file.png \
    images/qcom.ICO
