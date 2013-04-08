#ifndef V2DRAWING_H
#define V2DRAWING_H

#include "drawing.h"
#include "dp2.h"

class V2Drawing : public Drawing
{
    public:
        V2Drawing();
        virtual ~V2Drawing();
        virtual void drawLine(double x1, double y1, double x2, double y2);
        virtual void drawCircle(double x, double y, double r);
        virtual void drawHexagon(double x, double y, double l);
    protected:
    private:
        DP2 dp2;
};

#endif // V2DRAWING_H
