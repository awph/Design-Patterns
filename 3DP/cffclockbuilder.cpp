#include "cffclockbuilder.h"

void CFFClockBuilder::buildHoursNeedle()
{
    QPixmap pixmap(":/cff/hours");
    clock->setHoursNeedle(pixmap, -1);
}

void CFFClockBuilder::buildMinutesNeedle()
{
    QPixmap pixmap(":/cff/minutes");
    clock->setMinutesNeedle(pixmap, 60);
}

void CFFClockBuilder::buildSecondsNeedle()
{
    QPixmap pixmap(":/cff/seconds");
    clock->setSecondsNeedle(pixmap, -1);
}

void CFFClockBuilder::buildDateDisplay()
{

}

void CFFClockBuilder::buildDial()
{
    QPixmap pixmap(":/cff/dial");
    clock->setDial(pixmap);
}

void CFFClockBuilder::buildTickManager()
{
    TickManagerType type;
    type.ticksPerSecond = 10;
    type.waitZeroPosition = 1.5;
    clock->setTickManager(TickManager::getTickManager(type));
}
