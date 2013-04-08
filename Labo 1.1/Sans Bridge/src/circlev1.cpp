#include "../include/circlev1.h"

CircleV1::CircleV1(double x,double y,double r)
:Circle(x,y,r)
{
    //ctor
}

CircleV1::~CircleV1()
{
    //dtor
}

void CircleV1::drawCircle(double x, double y, double r)
{
    dessin.drawCircle(r,x,y);
}
