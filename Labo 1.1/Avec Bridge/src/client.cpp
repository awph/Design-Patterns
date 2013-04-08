#include "../include/client.h"

#include "../include/shape.h"
#include "../include/rectangle.h"
#include "../include/circle.h"
#include "../include/hexagon.h"
#include "../include/v1drawing.h"
#include "../include/v2drawing.h"

#include <iostream>

Client::Client()
{
    Drawing* v1 = new V1Drawing();
    Drawing* v2 = new V2Drawing();

    //Rectangle
    int x1 = 0,y1 = 0, x2 = 2, y2 = 1;

    //Cercle
    int xc = 0, yc = 0, r = 10;

    //Hexagon
    int xh = 0, yh = 0, l = 5;

    shapes.push_back(new Rectangle(x1,x2,y1,y2, v1));
    shapes.push_back(new Rectangle(x1,x2,y1,y2,v2));
    shapes.push_back(new Circle(xc,yc,r,v1));
    shapes.push_back(new Circle(xc,yc,r,v2));
    shapes.push_back(new Hexagon(xh,yh,l,v1));
    shapes.push_back(new Hexagon(xh,yh,l,v2));

    for(int i = 0; i < shapes.size(); ++i)
    {
        shapes[i]->draw();

        if((i+1)%2 == 0)
            std::cout << std::endl;
    }

    delete v1, v2;
}

Client::~Client()
{
    for(int i = 0;i < shapes.size();++i)
        delete shapes[i];
}
