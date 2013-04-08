#include "../include/hexagonv1.h"

HexagonV1::HexagonV1(double x, double y, double l)
:Hexagon(x,y,l)
{
    //ctor
}

HexagonV1::~HexagonV1()
{
    //dtor
}

void HexagonV1::drawHexagon(double x, double y, double l)
{
    dessin.drawHexagon(l,x,y);
}
