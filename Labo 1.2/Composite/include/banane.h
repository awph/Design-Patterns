#ifndef BANANE_H
#define BANANE_H

#include "fruit.h"


class Banane : public Fruit
{
    public:
        Banane();
        virtual ~Banane();
        void afficherFruit();
        bool avecOuSansPepin();
    protected:
    private:
};

#endif // BANANE_H
