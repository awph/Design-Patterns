#include "../include/client.h"
#include "../include/shape.h"
#include "../include/rectanglev1.h"
#include "../include/rectanglev2.h"
#include "../include/circleV1.h"
#include "../include/circleV2.h"
#include "../include/hexagonV1.h"
#include "../include/hexagonV2.h"

#include <iostream>

Client::Client()
{
    //Rectangle
    int x1 = 0,y1 = 0, x2 = 2, y2 = 1;

    //Cercle
    int xc = 0, yc = 0, r = 10;

    //Hexagon
    int xh = 0, yh = 0, l = 5;

    shapes.push_back(new RectangleV1(x1,x2,y1,y2));
    shapes.push_back(new RectangleV2(x1,x2,y1,y2));
    shapes.push_back(new CircleV1(xc,yc,r));
    shapes.push_back(new CircleV2(xc,yc,r));
    shapes.push_back(new HexagonV1(xh,yh,l));
    shapes.push_back(new HexagonV2(xh,yh,l));

    for(int i = 0;i < shapes.size(); ++i)
    {
        shapes[i]->draw();
        if((i+1)%2==0)
            std::cout << std::endl;
    }
}

Client::~Client()
{
    for(int i = 0;i < shapes.size(); ++i)
		delete shapes[i];
}
