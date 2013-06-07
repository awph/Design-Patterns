#include "mainwindow.h"
#include <QApplication>

#include <QDebug>
#include "timemanager.h"
#include "handler.h"
#include <climits>
#define TEST_CHAIN_OF_RESPONSIBILITY true


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    if(TEST_CHAIN_OF_RESPONSIBILITY){
        Handler* handler = new HandlerMilliseconds();
        handler = new HandlerSecondes(handler);
        handler = new HandlerMinutes(handler);
        handler = new HandlerHour(handler);


        QTime time;
        time.setHMS(1,2,3,4);
        qDebug() << time;
        qDebug() << TimeManager::getInstance()->getCurrentTimeInMilliseconds();
        qDebug() << time;
    }

    return a.exec();
}


