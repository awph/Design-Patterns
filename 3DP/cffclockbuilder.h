#ifndef CFFCLOCKBUILDER_H
#define CFFCLOCKBUILDER_H

#include "clockbuilder.h"

class CFFClockBuilder : public ClockBuilder
{
public:
    void buildHoursNeedle();
    void buildMinutesNeedle();
    void buildSecondsNeedle();
    void buildDateDisplay();
    void buildDial();
    void buildTickManager();
};

#endif // CFFCLOCKBUILDER_H
