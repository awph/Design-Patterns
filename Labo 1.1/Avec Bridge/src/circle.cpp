#include "../include/circle.h"

Circle::Circle(double x, double y, double r, Drawing *drawing) :
    Shape(drawing), x(x), y(y), r(r)
{
    //ctor
}

Circle::~Circle()
{
    //dtor
}

void Circle::draw()
{
    drawing->drawCircle(x, y, r);
}
