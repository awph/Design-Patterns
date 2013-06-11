#include "mainwindow.h"
#include "clock.h"
#include <QApplication>

#include <QDebug>
#include "timemanager.h"
#include "tickmanager.h"
#include "handler.h"
#include <climits>
#define TEST_CHAIN_OF_RESPONSIBILITY false
#define TEST_CLOCK false

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    #if TEST_CLOCK
    Clock c;
    c.show();
    c.setSecondsNeedle(*(new QPixmap(":/cff/seconds")));
    c.setMinutesNeedle(*(new QPixmap(":/cff/minutes")));
    c.setHoursNeedle(*(new QPixmap(":/cff/hours")));
    c.setDial(*(new QPixmap(":/cff/dial")));
    TickManagerType type;
    type.ticksPerSecond = 20;
    type.waitZeroPosition = 1.5;
    c.setTickManager(TickManager::getTickManager(type));
    #else
    MainWindow w;
    w.show();
    #endif

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


