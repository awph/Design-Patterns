#ifndef HANDLERHOUT_H
#define HANDLERHOUT_H

#include "handler.h"

class HandlerHour : public Handler
{
public:
    HandlerHour(Handler* nextHandler);
    void rotateNeedle(QTime& time, int day);
    void setNeedle(QGraphicsItem* needle, int nbTicksPerTour, NeedleType type);
};

#endif // HANDLERHOUT_H
