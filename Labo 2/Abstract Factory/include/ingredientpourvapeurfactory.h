#ifndef INGREDIENTPOURVAPEURFACTORY_H
#define INGREDIENTPOURVAPEURFACTORY_H

#include "ingredientfactory.h"


class IngredientPourVapeurFactory : public IngredientFactory
{
    public:
        Legume* createLegume();
        Herbe* createHerbe();
        Huile* createHuile();
    protected:
    private:
};

#endif // INGREDIENTPOURVAPEURFACTORY_H
