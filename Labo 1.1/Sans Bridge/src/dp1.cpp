#include "../include/dp1.h"
#include <iostream>
DP1::DP1()
{
    //ctor
}

DP1::~DP1()
{
    //dtor
}

void DP1::drawLine(double x1, double x2, double y1, double y2)
{
    std::cout << "drawLine entre le point (" << x1 << ":" << y1 << ") et (" << x2 << ":" << y2 << ")" << std::endl;
}

void DP1::drawCircle(double r, double x, double y)
{
    std::cout << "drawCircle de centre (" << x << ":" << y << ") et de rayon " << r << std::endl;
}

void DP1::drawHexagon(double l, double x, double y)
{
    std::cout << "drawHexagon de centre (" << x << ":" << y << ") et avec des aretes de longueurs " << l << std::endl;
}
