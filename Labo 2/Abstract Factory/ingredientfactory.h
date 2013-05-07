#ifndef INGREDIENTFACTORY_H
#define INGREDIENTFACTORY_H

#include "legume.h"
#include "herbe.h"
#include "huile.h"

class IngredientFactory
{
    public:
        virtual ~IngredientFactory() {}
        virtual Legume* createLegume() = 0;
        virtual Herbe* createHerbe() = 0;
        virtual Huile* createHuile() = 0;
    protected:
    private:
};

#endif // INGREDIENTFACTORY_H
