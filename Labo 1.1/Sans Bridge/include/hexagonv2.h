#ifndef HEXAGONV2_H
#define HEXAGONV2_H

#include "hexagon.h"
#include "dp2.h"

class HexagonV2 : public Hexagon
{
    public:
        HexagonV2(double x, double y, double l);
        virtual ~HexagonV2();
    protected:
        void drawHexagon(double x, double y, double l);
    private:
        DP2 dessin;
};

#endif // HEXAGONV1_H
