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
    protected:
    private:
};

#endif // POMME_H
