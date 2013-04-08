#ifndef CIRCLEV2_H
#define CIRCLEV2_H

#include "circle.h"
#include "dp2.h"

class CircleV2 : public Circle
{
    public:
        CircleV2(double x,double y,double r);
        virtual ~CircleV2();
    protected:
        void drawCircle(double x, double y, double r);
    private:
        DP2 dessin;
};

#endif // CIRCLEV1_H
