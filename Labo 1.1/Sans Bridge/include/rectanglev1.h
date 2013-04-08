#ifndef RECTANGLEV1_H
#define RECTANGLEV1_H

#include "rectangle.h"
#include "dp1.h"

class RectangleV1 : public Rectangle
{
    public:
        RectangleV1(double x1,double x2,double y1,double y2);
        virtual ~RectangleV1();
    protected:
        void drawLine(double x1, double y1, double x2, double y2);
    private:
        DP1 dessin;
};

#endif // RECTANGLEV1_H
