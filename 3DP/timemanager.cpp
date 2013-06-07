#include "timemanager.h"

#include <ctime>
#include <QTimer>
#include <QDebug>

const int dt = 10;

TimeManager* TimeManager::timeManager = 0;

TimeManager::TimeManager()
{
    time_t t = time(0);
    struct tm* now = localtime(&t);
    currentTimeInMilliseconds = now->tm_hour * 1000 * 60 * 60 + now->tm_min * 1000 * 60 + now->tm_sec * 1000;


    QTimer* timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(updateTime()));
    timer->start(dt);
}

TimeManager* TimeManager::getInstance()
{
    if(timeManager == 0)
        timeManager = new TimeManager();
    return timeManager;
}

void TimeManager::updateTime()
{
    currentTimeInMilliseconds += dt;
}
