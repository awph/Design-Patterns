#include "../include/v1drawing.h"

V1Drawing::V1Drawing()
{
    //ctor
}

V1Drawing::~V1Drawing()
{
    //dtor
}

void V1Drawing::drawLine(double x1, double y1, double x2, double y2)
{
    dp1.drawLine(x1, x2, y1, y2);
}

void V1Drawing::drawCircle(double x, double y, double r)
{
    dp1.drawCircle(r, x, y);
}

void V1Drawing::drawHexagon(double x, double y, double l)
{
    dp1.drawHexagon(l, x, y);
}
