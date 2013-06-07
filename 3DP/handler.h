#ifndef HANDLER_H
#define HANDLER_H

#include <QTime>

class Handler
{
public:
    Handler(Handler* nextHandler);
    virtual ~Handler();
    virtual QTime getTime(long timeInMilliseconds, QTime& time)=0;
protected:
    Handler* nextHandler;
};

#include "handlerhour.h"
#include "handlerminutes.h"
#include "handlersecondes.h"
#include "handlermilliseconds.h"

#endif // HANDLER_H
