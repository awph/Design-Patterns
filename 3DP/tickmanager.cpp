#include "tickmanager.h"
#include <QTime>

TickManager::TickManager(TickManagerType type) : type(type)
{
    timerRunning = new QTimer(this);
    connect(timerRunning, SIGNAL(timeout()), this, SLOT(elapsed()));

    timerTop = new QTimer(this);
    timerTop->setSingleShot(true);
    timerTop->setInterval(type.waitZeroPosition * 1000.0);
    connect(timerTop, SIGNAL(timeout()), this, SLOT(start()));

    long tmrDelay;
    if(type.waitZeroPosition < 0.0001)
        tmrDelay = 1000.0 / type.ticksPerSecond;
    else
    {
        countRunning = type.ticksPerSecond * 60.0;
        QTime t = QTime::currentTime();
        counterRunning = countRunning - t.second() * type.ticksPerSecond;
        tmrDelay = (60.0 - type.waitZeroPosition) / 60.0 * (1.0 / type.ticksPerSecond) * 1000.0;
    }

    timerRunning->setInterval(tmrDelay);
    timerRunning->start();
}

TickManager* TickManager::getTickManager(TickManagerType type)
{
    static QMap<QPair<qreal, qreal>, TickManager*> types;

    QPair<qreal, qreal> key;
    key.first = type.ticksPerSecond;
    key.second = type.waitZeroPosition;

    if(types.contains(key))
        return types[key];
    else
    {
        TickManager* tm = new TickManager(type);
        types[key] = tm;
        return tm;
    }
}

void TickManager::elapsed()
{
    if(--counterRunning <= 0)
    {
        timerRunning->stop();
        timerTop->start();
        counterRunning = countRunning;
    }
    emit tick();
}

void TickManager::start()
{
    timerRunning->start();
}

qreal TickManager::getTicksPerSecond()
{
    return type.ticksPerSecond;
}

long TickManager::getWaitZeroPosition()
{
    return type.waitZeroPosition;
}
