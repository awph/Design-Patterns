#include "../include/rectanglev1.h"

RectangleV1::RectangleV1(double x1,double x2,double y1,double y2)
:Rectangle(x1,x2,y1,y2)
{
    //ctor
}

RectangleV1::~RectangleV1()
{
    //dtor
}

void RectangleV1::drawLine(double x1, double y1, double x2, double y2)
{
    dessin.drawLine(x1,x2,y1,y2);
}
