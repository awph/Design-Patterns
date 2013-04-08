#ifndef HEXAGONV1_H
#define HEXAGONV1_H

#include "hexagon.h"
#include "dp1.h"

class HexagonV1 : public Hexagon
{
    public:
        HexagonV1(double x, double y, double l);
        virtual ~HexagonV1();
    protected:
        void drawHexagon(double x, double y, double l);
    private:
        DP1 dessin;
};

#endif // HEXAGONV1_H
