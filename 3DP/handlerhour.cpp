#include "handlerhour.h"

HandlerHour::HandlerHour(Handler* nextHandler) : Handler(nextHandler)
{
}

QTime HandlerHour::getTime(long timeInMilliseconds, QTime &time)
{
    int h = timeInMilliseconds / (1000 * 60 * 60);
    timeInMilliseconds -= h * 1000 * 60 * 60;
    time.setHMS(h,0,0,0);
    this->nextHandler->getTime(timeInMilliseconds, time);
    return time;
}
