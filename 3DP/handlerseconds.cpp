#include "handlerseconds.h"
#include <QDebug>

HandlerSeconds::HandlerSeconds(Handler* nextHandler)
    : Handler(nextHandler), waitTop(0)
{
}

void HandlerSeconds::rotateNeedle(QTime& time, int day)
{
    qreal seconds = time.second() + time.msec() / 1000.0;
    seconds *= (60.0 + waitTop) / 60.0;

    qreal angle = seconds / 60.0 * 360.0;
    if(nbTicksPerTour != -1)
    {
        qreal temp = 360.0 / (qreal)nbTicksPerTour;
        angle = (int)(angle / temp) * temp;
    }

    if(angle > 360.0)
        angle = 0;

    if(needle != 0)
    {
        needle->resetTransform();
        needle->setRotation(angle);
    }
    if(nextHandler != 0)
        nextHandler->rotateNeedle(time, day);
}

void HandlerSeconds::setNeedle(QGraphicsItem* needle, int nbTicksPerTour, NeedleType type)
{
    if(type == Second)
    {
        this->needle = needle;
        this->nbTicksPerTour = nbTicksPerTour;
    }
    else if(nextHandler != 0)
        nextHandler->setNeedle(needle, nbTicksPerTour, type);
}
