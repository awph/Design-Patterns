#include "../include/v2drawing.h"

V2Drawing::V2Drawing()
{
    //ctor
}

V2Drawing::~V2Drawing()
{
    //dtor
}

void V2Drawing::drawLine(double x1, double y1, double x2, double y2)
{
    dp2.draw_a_line(x1, y1, x2, y2);
}

void V2Drawing::drawCircle(double x, double y, double r)
{
    dp2.draw_a_circle(x, y, r);
}

void V2Drawing::drawHexagon(double x, double y, double l)
{
    dp2.draw_an_hexagon(x, y, l);
}
