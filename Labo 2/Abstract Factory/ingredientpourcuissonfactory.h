#ifndef INGREDIENTPOURCUISSONFACTORY_H
#define INGREDIENTPOURCUISSONFACTORY_H

#include "ingredientfactory.h"


class IngredientPourCuissonFactory : public IngredientFactory
{
    public:
        Legume* createLegume();
        Herbe* createHerbe();
        Huile* createHuile();
    protected:
    private:
};

#endif // INGREDIENTPOURCUISSONFACTORY_H
