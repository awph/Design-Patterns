#include "../include/dp2.h"
#include <iostream>

DP2::DP2()
{
    //ctor
}

DP2::~DP2()
{
    //dtor
}

void DP2::draw_a_line(double x1, double y1, double x2, double y2)
{
    std::cout << "draw_a_line entre le point (" << x1 << ":" << y1 << ") et (" << x2 << ":" << y2 << ")" << std::endl;
}

void DP2::draw_a_circle(double x, double y, double r)
{
    std::cout << "draw_a_circle de centre (" << x << ":" << y << ") et de rayon " << r << std::endl;
}

void DP2::draw_an_hexagon(double x, double y, double l)
{
    std::cout << "draw_an_hexagon de centre (" << x << ":" << y << ") et avec des aretes de longueurs " << l << std::endl;
}
