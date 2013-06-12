#ifndef ROLEXCLOCKBUILDER_H
#define ROLEXCLOCKBUILDER_H

#include "clockbuilder.h"

class RolexClockBuilder : public ClockBuilder
{
public:
    void buildHoursNeedle();
    void buildMinutesNeedle();
    void buildSecondsNeedle();
    void buildDateDisplay();
    void buildDial();
    void buildTickManager();
};

#endif // ROLEXCLOCKBUILDER_H
