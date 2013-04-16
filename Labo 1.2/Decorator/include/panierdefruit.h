#ifndef PANIERDEFRUIT_H
#define PANIERDEFRUIT_H

#include "fruit.h"
#include <vector>

class PanierDeFruit : public Fruit
{
    public:
        PanierDeFruit();
        virtual ~PanierDeFruit();
        void afficherFruit();
        bool avecOuSansPepin();
        void ajouterFruit(Fruit *);
    protected:
    private:
        std::vector<Fruit *> listeFruits;
};

#endif // PANIER-DE-FRUIT_H
