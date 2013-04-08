#ifndef RECTANGLEV2_H
#define RECTANGLEV2_H

#include "rectangle.h"
#include "dp2.h"

class RectangleV2 : public Rectangle
{
    public:
        RectangleV2(double x1,double x2,double y1,double y2);
        virtual ~RectangleV2();
    protected:
        void drawLine(double x1, double y1, double x2, double y2);
    private:
        DP2 dessin;
};

#endif // RECTANGLEV1_H
