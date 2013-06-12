#include "swatchclockbuilder.h"

void SwatchClockBuilder::buildHoursNeedle()
{
    QPixmap pixmap(":/swatch/hours");
    clock->setHoursNeedle(pixmap, -1);
}

void SwatchClockBuilder::buildMinutesNeedle()
{
    QPixmap pixmap(":/swatch/minutes");
    clock->setMinutesNeedle(pixmap, -1);
}

void SwatchClockBuilder::buildSecondsNeedle()
{
    QPixmap pixmap(":/swatch/seconds");
    clock->setSecondsNeedle(pixmap, 60);
}

void SwatchClockBuilder::buildDateDisplay()
{

}

void SwatchClockBuilder::buildDial()
{
    QPixmap pixmap(QString::number(dialNumber).prepend(":/swatch/dial_"));
    clock->setDial(pixmap);
}

void SwatchClockBuilder::buildTickManager()
{
    TickManagerType type;
    type.ticksPerSecond = 1;
    type.waitZeroPosition = 0;
    clock->setTickManager(TickManager::getTickManager(type));
}
