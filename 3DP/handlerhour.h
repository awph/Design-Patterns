#ifndef HANDLERHOUT_H
#define HANDLERHOUT_H

#include "handler.h"

class HandlerHour : public Handler
{
public:
    HandlerHour(Handler* nextHandler);
    QTime getTime(long timeInMilliseconds, QTime &time);
};

#endif // HANDLERHOUT_H
