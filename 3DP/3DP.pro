#-------------------------------------------------
#
# Project created by QtCreator 2013-05-30T13:49:38
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 3DP
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    clock.cpp \
    handler.cpp \
    handlerhour.cpp \
    handlerminutes.cpp \
    handlersecondes.cpp \
    timemanager.cpp \
    handlermilliseconds.cpp

HEADERS  += mainwindow.h \
    clock.h \
    handler.h \
    handlerhour.h \
    handlerminutes.h \
    handlersecondes.h \
    timemanager.h \
    handlermilliseconds.h

FORMS    += mainwindow.ui \
    clock.ui
