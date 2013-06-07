#include "handlersecondes.h"

HandlerSecondes::HandlerSecondes(Handler * nextHandler) : Handler(nextHandler)
{
}

QTime HandlerSecondes::getTime(long timeInMilliseconds, QTime &time)
{
    int s = timeInMilliseconds / 1000;
    timeInMilliseconds -= s * 1000;
    time.setHMS(time.hour(), time.minute(), s, 0);
    this->nextHandler->getTime(timeInMilliseconds, time);
    return time;
}
