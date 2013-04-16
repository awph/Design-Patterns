#ifndef POMME_H
#define POMME_H

#include "fruit.h"


class Pomme : public Fruit
{
    public:
        Pomme();
        virtual ~Pomme();
        void afficherFruit();
        bool avecOuSansPepin();
};

#endif // POMME_H
