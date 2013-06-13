#-------------------------------------------------
#
# Project created by QtCreator 2013-05-30T13:49:38
#
#-------------------------------------------------

QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 3DP
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    clock.cpp \
    handlerhour.cpp \
    handlerminutes.cpp \
    timemanager.cpp \
    tickmanager.cpp \
    watchmaker.cpp \
    rolexclockbuilder.cpp \
    cffclockbuilder.cpp \
    swatchclockbuilder.cpp \
    handlerseconds.cpp \
    ttouchclockbuilder.cpp \
    handlerdate.cpp

HEADERS  += mainwindow.h \
    clock.h \
    handler.h \
    handlerhour.h \
    handlerminutes.h \
    timemanager.h \
    tickmanager.h \
    watchmaker.h \
    clockbuilder.h \
    rolexclockbuilder.h \
    cffclockbuilder.h \
    swatchclockbuilder.h \
    handlerseconds.h \
    ttouchclockbuilder.h \
    handlerdate.h

FORMS    += mainwindow.ui

RESOURCES += \
    images.qrc
