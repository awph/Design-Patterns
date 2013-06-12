#include "rolexclockbuilder.h"

const int kTicksPerSecond = 4;

void RolexClockBuilder::buildHoursNeedle()
{
    QPixmap pixmap(":/rolex/hours");
    clock->setHoursNeedle(pixmap, -1);
}

void RolexClockBuilder::buildMinutesNeedle()
{
    QPixmap pixmap(":/rolex/minutes");
    clock->setMinutesNeedle(pixmap, -1);
}

void RolexClockBuilder::buildSecondsNeedle()
{
    QPixmap pixmap(":/rolex/seconds");
    clock->setSecondsNeedle(pixmap, kTicksPerSecond * 60);
}

void RolexClockBuilder::buildDateDisplay()
{

}

void RolexClockBuilder::buildDial()
{
    QPixmap pixmap(":/rolex/dial");
    clock->setDial(pixmap);
}

void RolexClockBuilder::buildTickManager()
{
    TickManagerType type;
    type.ticksPerSecond = kTicksPerSecond;
    type.waitZeroPosition = 0;
    clock->setTickManager(TickManager::getTickManager(type));
}
