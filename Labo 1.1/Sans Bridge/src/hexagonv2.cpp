#include "../include/hexagonv2.h"

HexagonV2::HexagonV2(double x, double y, double l)
:Hexagon(x,y,l)
{
    //ctor
}

HexagonV2::~HexagonV2()
{
    //dtor
}

void HexagonV2::drawHexagon(double x, double y, double l)
{
    dessin.draw_an_hexagon(x,y,l);
}
