#include "../include/rectanglev2.h"

RectangleV2::RectangleV2(double x1,double x2,double y1,double y2)
:Rectangle(x1,x2,y1,y2)
{
    //ctor
}

RectangleV2::~RectangleV2()
{
    //dtor
}

void RectangleV2::drawLine(double x1, double y1, double x2, double y2)
{
    dessin.draw_a_line(x1,y1,x2,y2);
}
