#ifndef SWATCHCLOCKBUILDER_H
#define SWATCHCLOCKBUILDER_H

#include "clockbuilder.h"

enum SwatchColor
{
    Green = 1,
    Pink = 2,
    Blue = 3,
    Brown = 4,
    Orange = 5
};

class SwatchClockBuilder : public ClockBuilder
{
public:
    SwatchClockBuilder(SwatchColor color) : dialNumber(color) {}
    void buildHoursNeedle();
    void buildMinutesNeedle();
    void buildSecondsNeedle();
    void buildDateDisplay();
    void buildDial();
    void buildTickManager();

private:
    SwatchColor dialNumber;
};

#endif // SWATCHCLOCKBUILDER_H
