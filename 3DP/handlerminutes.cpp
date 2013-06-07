#include "handlerminutes.h"

HandlerMinutes::HandlerMinutes(Handler * nextHandler) : Handler(nextHandler)
{
}

QTime HandlerMinutes::getTime(long timeInMilliseconds, QTime &time)
{
    int m = timeInMilliseconds / (1000 * 60);
    timeInMilliseconds -= m * 1000 * 60;
    time.setHMS(time.hour(),m,0,0);
    this->nextHandler->getTime(timeInMilliseconds, time);
    return time;
}
