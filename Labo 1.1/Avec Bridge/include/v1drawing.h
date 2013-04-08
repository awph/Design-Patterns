#ifndef V1DRAWING_H
#define V1DRAWING_H

#include "drawing.h"
#include "dp1.h"

class V1Drawing : public Drawing
{
    public:
        V1Drawing();
        virtual ~V1Drawing();
        virtual void drawLine(double x1, double y1, double x2, double y2);
        virtual void drawCircle(double x, double y, double r);
        virtual void drawHexagon(double x, double y, double l);
    protected:
    private:
        DP1 dp1;
};

#endif // V1DRAWING_H
