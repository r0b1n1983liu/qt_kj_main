#-------------------------------------------------
#
# Project created by QtCreator 2014-03-30T16:58:38
#
#-------------------------------------------------

QT       += core gui sql xlsx

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qt_kj_main
TARGET = kj
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    index.cpp \
    login.cpp \
    user.cpp \
    datatrans.cpp \
    dynamicarray.cpp \
    database.cpp

HEADERS  += mainwindow.h \
    index.h \
    login.h \
    user.h \
    datatrans.h \
    dynamicarray.h \
    database.h

FORMS    += mainwindow.ui \
    index.ui \
    login.ui \
    user.ui \
    datatrans.ui

RESOURCES += \
    kj.qrc

#using in Windows
RC_FILE = kj.rc
#using in Mac
ICON = stock.icns
