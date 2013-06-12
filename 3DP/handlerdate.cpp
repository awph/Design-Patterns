#include "handlerdate.h"

HandlerDate::HandlerDate(Handler* nextHandler)
    : Handler(nextHandler)
{
}

void HandlerDate::rotateNeedle(QTime& time, int day)
{
    qreal angle = (qreal)(day-1) / 31.0 * 360.0;

    if(needle != 0)
    {
        needle->resetTransform();
        needle->setRotation(-angle);
    }
    if(nextHandler != 0)
        nextHandler->rotateNeedle(time, day);
}

void HandlerDate::setNeedle(QGraphicsItem* needle, int nbTicksPerTour, NeedleType type)
{
    if(type == Date)
    {
        this->needle = needle;
        this->nbTicksPerTour = nbTicksPerTour;
    }
    else if(nextHandler != 0)
        nextHandler->setNeedle(needle, nbTicksPerTour, type);
}
