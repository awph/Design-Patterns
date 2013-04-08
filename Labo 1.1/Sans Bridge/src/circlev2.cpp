#include "../include/circlev2.h"

CircleV2::CircleV2(double x,double y,double r)
:Circle(x,y,r)
{
    //ctor
}

CircleV2::~CircleV2()
{
    //dtor
}

void CircleV2::drawCircle(double x, double y, double r)
{
    dessin.draw_a_circle(x,y,r);
}
