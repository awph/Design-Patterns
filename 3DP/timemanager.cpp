#include "timemanager.h"

const int dt = 1;
const int sync = 100;

TimeManager* TimeManager::timeManager = 0;

TimeManager::TimeManager()
{
    syncTime();
    start(QThread::TimeCriticalPriority);
}

void TimeManager::run()
{
    while(true)
    {
        QThread::msleep(dt);
        updateTime();
    }
}

TimeManager* TimeManager::getInstance()
{
    if(timeManager == 0)
        timeManager = new TimeManager();
    return timeManager;
}

void TimeManager::updateTime()
{
    if(++nbUpdate % sync == 0)
    {
        nbUpdate = 0;
        syncTime();
    }
    else
    {
        time.addMSecs(dt);
    }
}

void TimeManager::syncTime()
{
    time = QTime::currentTime();
}
