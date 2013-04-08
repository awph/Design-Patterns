#include "../include/circle.h"

Circle::Circle(double x,double y,double r)
:x(x),y(y),r(r)
{
    //ctor
}

Circle::~Circle()
{
    //dtor
}

void Circle::draw()
{
    drawCircle(x,y,r);
}
