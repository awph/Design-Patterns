#include "../include/hexagon.h"

Hexagon::Hexagon(double x, double y, double l, Drawing *drawing) :
    Shape(drawing), x(x), y(y), l(l)
{
    //ctor
}

Hexagon::~Hexagon()
{
    //dtor
}

void Hexagon::draw()
{
    drawing->drawHexagon(x, y, l);
}
