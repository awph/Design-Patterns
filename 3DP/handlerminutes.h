#ifndef HANDLERMINUTES_H
#define HANDLERMINUTES_H

#include "handler.h"

class HandlerMinutes : public Handler
{
public:
    HandlerMinutes(Handler* nextHandler);
    void rotateNeedle(QTime& time, int day);
    void setNeedle(QGraphicsItem* needle, int nbTicksPerTour, NeedleType type);
};

#endif // HANDLERMINUTES_H
