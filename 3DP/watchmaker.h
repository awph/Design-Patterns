#ifndef WATCHMAKER_H
#define WATCHMAKER_H

#include "clockbuilder.h"
#include "rolexclockbuilder.h"
#include "clock.h"

class Watchmaker
{
public:
    Watchmaker();
    ~Watchmaker();
    Clock* getClock();
    void setBuilder(ClockBuilder* builder);
    void constructClock();

private:
    ClockBuilder* builder;
};

#endif // WATCHMAKER_H
