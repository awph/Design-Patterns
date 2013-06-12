#include "watchmaker.h"
#include "rolexclockbuilder.h"

Watchmaker::Watchmaker() : builder(0)
{

}

Watchmaker::~Watchmaker()
{
    if(builder)
        delete builder;
}

Clock* Watchmaker::getClock()
{
    return builder->getClock();
}

void Watchmaker::setBuilder(ClockBuilder *builder)
{
    if(this->builder)
        delete this->builder;

    this->builder = builder;
}

void Watchmaker::constructClock()
{
    builder->buildDial();
    builder->buildDateDisplay();
    builder->buildHoursNeedle();
    builder->buildMinutesNeedle();
    builder->buildSecondsNeedle();
    builder->buildTickManager();
}
