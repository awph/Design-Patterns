#include "handlermilliseconds.h"

HandlerMilliseconds::HandlerMilliseconds() : Handler(0)
{
}

QTime HandlerMilliseconds::getTime(long timeInMilliseconds, QTime &time)
{
    time.setHMS(time.hour(), time.minute(), time.second(), timeInMilliseconds);
    return time;
}
