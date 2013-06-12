#ifndef CLOCKBUILDER_H
#define CLOCKBUILDER_H

#include "clock.h"

class ClockBuilder
{
public:
    ClockBuilder() { clock = new Clock(); }
    virtual ~ClockBuilder() {}

    Clock* getClock() { return clock; }

    virtual void buildHoursNeedle() = 0;
    virtual void buildMinutesNeedle() = 0;
    virtual void buildSecondsNeedle() = 0;
    virtual void buildDateDisplay() = 0;
    virtual void buildDial() = 0;
    virtual void buildTickManager() = 0;

protected:
    Clock* clock;
};

#endif // CLOCKBUILDER_H
