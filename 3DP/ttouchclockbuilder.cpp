#include "ttouchclockbuilder.h"

void TTouchClockBuilder::buildHoursNeedle()
{
    QPixmap pixmap(QString::number(model).prepend(":/ttouch/hours_"));
    clock->setHoursNeedle(pixmap, -1);
}

void TTouchClockBuilder::buildMinutesNeedle()
{
    QPixmap pixmap(QString::number(model).prepend(":/ttouch/minutes_"));
    clock->setMinutesNeedle(pixmap, -1);
}

void TTouchClockBuilder::buildSecondsNeedle()
{

}

void TTouchClockBuilder::buildDateDisplay()
{

}

void TTouchClockBuilder::buildDial()
{
    QPixmap pixmap(QString::number(model).prepend(":/ttouch/dial_"));
    clock->setDial(pixmap);
}

void TTouchClockBuilder::buildTickManager()
{
    TickManagerType type;
    type.ticksPerSecond = 1.0 / 20.0;
    type.waitZeroPosition = 0;
    clock->setTickManager(TickManager::getTickManager(type));
}
