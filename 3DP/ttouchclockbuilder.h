#ifndef TTOUCHCLOCKBUILDER_H
#define TTOUCHCLOCKBUILDER_H

#include "clockbuilder.h"

enum TTModel
{
    Plast = 1, Steel = 2
};

class TTouchClockBuilder : public ClockBuilder
{
public:
    TTouchClockBuilder(TTModel model) : model(model) {}
    void buildHoursNeedle();
    void buildMinutesNeedle();
    void buildSecondsNeedle();
    void buildDateDisplay();
    void buildDial();
    void buildTickManager();

private:
    TTModel model;
};

#endif // TTOUCHCLOCKBUILDER_H
