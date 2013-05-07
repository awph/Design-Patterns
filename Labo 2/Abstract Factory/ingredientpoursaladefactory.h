#ifndef INGREDIENTPOURSALADEFACTORY_H
#define INGREDIENTPOURSALADEFACTORY_H

#include "ingredientfactory.h"


class IngredientPourSaladeFactory : public IngredientFactory
{
    public:
        Legume* createLegume();
        Herbe* createHerbe();
        Huile* createHuile();
    protected:
    private:
};

#endif // INGREDIENTPOURSALADEFACTORY_H
