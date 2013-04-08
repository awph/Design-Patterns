#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape
{
    public:
        Rectangle(double x1,double x2,double y1,double y2);
        virtual ~Rectangle();
        void draw();
    protected:
        virtual void drawLine(double x1, double y1, double x2, double y2)=0;
    private:
        double x1,x2,y1,y2;
};

#endif // RECTANGLE_H
