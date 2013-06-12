#include "mainwindow.h"
#include "clock.h"
#include <QApplication>

#include <QDebug>
#include "timemanager.h"
#include "tickmanager.h"
#include "handler.h"
#include "watchmaker.h"
#include "rolexclockbuilder.h"
#include <climits>
#define TEST_CHAIN_OF_RESPONSIBILITY false
#define TEST_CLOCK false

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.showMaximized();

    return a.exec();
}


