#ifndef HEXAGON_H
#define HEXAGON_H

#include "shape.h"


class Hexagon : public Shape
{
    public:
        Hexagon(double x, double y, double l, Drawing *drawing);
        virtual ~Hexagon();
        void draw();
    protected:
    private:
        double x, y, l;
};

#endif // HEXAGON_H
