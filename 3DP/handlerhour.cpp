#include "handlerhour.h"

HandlerHour::HandlerHour(Handler* nextHandler)
    : Handler(nextHandler)
{
}

void HandlerHour::rotateNeedle(QTime& time, int day)
{    
    qreal hours = time.hour() + (time.minute() / 60.0) + (time.second() / 3600.0);
    if(hours >= 12.0)
        hours -= 12.0;

    qreal angle = hours / 12.0 * 360.0;
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

void HandlerHour::setNeedle(QGraphicsItem* needle, int nbTicksPerTour, NeedleType type)
{
    if(type == Hour)
    {
        this->needle = needle;
        this->nbTicksPerTour = nbTicksPerTour;
    }
    else if(nextHandler != 0)
        nextHandler->setNeedle(needle, nbTicksPerTour, type);
}
