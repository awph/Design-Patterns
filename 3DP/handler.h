#ifndef HANDLER_H
#define HANDLER_H

#include <QTime>
#include <QGraphicsItem>

enum NeedleType
{
    Second, Minute, Hour, Date
};

class Handler
{
public:
    Handler(Handler* nextHandler) :
        nextHandler(nextHandler), needle(0), nbTicksPerTour(1) {}
    virtual ~Handler()
    {
        if(nextHandler != 0)
            delete nextHandler;
    }

    virtual void rotateNeedle(QTime& time, int day) = 0;
    virtual void setNeedle(QGraphicsItem* needle, int nbTicksPerTour, NeedleType type) = 0;
protected:
    Handler* nextHandler;
    QGraphicsItem* needle;
    int nbTicksPerTour;
};

#include "handlerhour.h"
#include "handlerminutes.h"
#include "handlerseconds.h"
#include "handlerdate.h"

#endif // HANDLER_H
