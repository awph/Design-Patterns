#ifndef HANDLERMINUTES_H
#define HANDLERMINUTES_H

#include "handler.h"

class HandlerMinutes : public Handler
{
public:
    HandlerMinutes(Handler * nextHandler);
    QTime getTime(long timeInMilliseconds, QTime &time);
};

#endif // HANDLERMINUTES_H
