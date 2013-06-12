#include "handlerminutes.h"

HandlerMinutes::HandlerMinutes(Handler* nextHandler)
    : Handler(nextHandler)
{
}

void HandlerMinutes::rotateNeedle(QTime& time, int day)
{
    qreal minutes = time.minute() + time.second() / 60.0 + time.msec() / 60.0 / 1000.0;

    qreal angle = minutes / 60.0 * 360.0;
    if(nbTicksPerTour != -1)
    {
        qreal temp = 360.0 / (qreal)nbTicksPerTour;
        angle = (int)(angle / temp) * temp;
    }

    if(needle != 0)
    {
        needle->resetTransform();
        needle->setRotation(angle);
    }
    if(nextHandler != 0)
        nextHandler->rotateNeedle(time, day);
}

void HandlerMinutes::setNeedle(QGraphicsItem* needle, int nbTicksPerTour, NeedleType type)
{
    if(type == Minute)
    {
        this->needle = needle;
        this->nbTicksPerTour = nbTicksPerTour;
    }
    else if(nextHandler != 0)
        nextHandler->setNeedle(needle, nbTicksPerTour, type);
}
