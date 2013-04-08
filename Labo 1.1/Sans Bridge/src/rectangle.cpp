#include "../include/rectangle.h"

Rectangle::Rectangle(double x1,double x2,double y1,double y2)
:x1(x1),x2(x2),y1(y1),y2(y2)
{
    //ctor
}

Rectangle::~Rectangle()
{
    //dtor
}

void Rectangle::draw()
{
    drawLine(x1, y1, x2, y1);
    drawLine(x2, y1, x2, y2);
    drawLine(x2, y2, x1, y2);
    drawLine(x1, y2, x1, y1);
}
