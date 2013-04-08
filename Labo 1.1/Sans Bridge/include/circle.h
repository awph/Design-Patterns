#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : public Shape
{
    public:
        Circle(double x,double y,double r);
        virtual ~Circle();
        void draw();
    protected:
        virtual void drawCircle(double x, double y, double r)=0;

    private:
        double x,y,r;
};

#endif // CIRCLE_H
