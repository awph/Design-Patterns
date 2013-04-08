#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"


class Circle : public Shape
{
    public:
        Circle(double x, double y, double r, Drawing *drawing);
        virtual ~Circle();
        void draw();
    protected:
    private:
        double x, y, r;
};

#endif // CIRCLE_H
