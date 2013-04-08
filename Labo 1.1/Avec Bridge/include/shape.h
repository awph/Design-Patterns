#ifndef SHAPE_H
#define SHAPE_H
#include "../include/drawing.h"

class Shape
{
    public:
        Shape(Drawing*);
        virtual ~Shape();
        virtual void draw() = 0;
    protected:
        Drawing *drawing;
    private:
};

#endif // SHAPE_H
