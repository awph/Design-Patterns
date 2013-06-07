#ifndef HANDLERSECONDES_H
#define HANDLERSECONDES_H

#include "handler.h"

class HandlerSecondes : public Handler
{
public:
    HandlerSecondes(Handler * nextHandler);
    QTime getTime(long timeInMilliseconds, QTime &time);
};

#endif // HANDLERSECONDES_H
