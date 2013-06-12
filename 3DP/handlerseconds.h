#ifndef HANDLERSECONDES_H
#define HANDLERSECONDES_H

#include "handler.h"

class HandlerSeconds : public Handler
{
public:
    HandlerSeconds(Handler* nextHandler);
    void rotateNeedle(QTime& time, int day);
    void setNeedle(QGraphicsItem* needle, int nbTicksPerTour, NeedleType type);
    void setTopWaitTime(qreal waitTop) { this->waitTop = waitTop; }
private:
    qreal waitTop;
};

#endif // HANDLERSECONDES_H
