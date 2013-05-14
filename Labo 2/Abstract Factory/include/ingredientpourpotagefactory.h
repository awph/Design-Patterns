#ifndef INGREDIENTPOURPOTAGEFACTORY_H
#define INGREDIENTPOURPOTAGEFACTORY_H

#include "ingredientfactory.h"


class IngredientPourPotageFactory : public IngredientFactory
{
    public:
        Legume* createLegume();
        Herbe* createHerbe();
        Huile* createHuile();
    protected:
    private:
};

#endif // INGREDIENTPOURPOTAGEFACTORY_H
