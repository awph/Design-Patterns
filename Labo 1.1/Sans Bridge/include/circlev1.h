#ifndef CIRCLEV1_H
#define CIRCLEV1_H

#include "circle.h"
#include "dp1.h"

class CircleV1 : public Circle
{
    public:
        CircleV1(double x,double y,double r);
        virtual ~CircleV1();
    protected:
        void drawCircle(double x, double y, double r);
    private:
        DP1 dessin;
};

#endif // CIRCLEV1_H
