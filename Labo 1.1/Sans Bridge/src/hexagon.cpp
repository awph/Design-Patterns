#include "../include/hexagon.h"

Hexagon::Hexagon(double x, double y, double l)
:x(x),y(y),l(l)
{
    //ctor
}

Hexagon::~Hexagon()
{
    //dtor
}

void Hexagon::draw()
{
    drawHexagon(x, y, l);
}
