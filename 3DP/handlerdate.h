#ifndef HANDLERDATE_H
#define HANDLERDATE_H

#include "handler.h"

class HandlerDate : public Handler
{
public:
    HandlerDate(Handler* nextHandler);
    void rotateNeedle(QTime& time, int day);
    void setNeedle(QGraphicsItem* needle, int nbTicksPerTour, NeedleType type);
};

#endif // HANDLERDATE_H
