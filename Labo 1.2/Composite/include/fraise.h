#ifndef FRAISE_H
#define FRAISE_H

#include "fruit.h"

class Fraise : public Fruit
{
    public:
        Fraise();
        virtual ~Fraise();
        void afficherFruit();
        bool avecOuSansPepin();
};

#endif // FRAISE_H
