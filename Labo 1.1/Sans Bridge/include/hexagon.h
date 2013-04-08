#ifndef HEXAGON_H
#define HEXAGON_H

#include "shape.h"

class Hexagon : public Shape
{
    public:
        Hexagon(double x, double y, double l);
        virtual ~Hexagon();
        void draw();
    protected:
        virtual void drawHexagon(double x, double y, double l)=0;
    private:
        double x,y,l;
};

#endif // HEXAGON_H
