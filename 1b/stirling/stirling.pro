#-------------------------------------------------
#
# Project created by QtCreator 2016-11-05T18:16:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = stirling
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    cstirling.cpp \
    cdrawhelper.cpp \
    cbessel.cpp

HEADERS  += mainwindow.h \
    cstirling.h \
    cdrawhelper.h \
    cbessel.h

FORMS    += mainwindow.ui
