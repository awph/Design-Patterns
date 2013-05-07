#include "ingredientpourpotagefactory.h"
#include "herbepourpotage.h"
#include "huilepourpotage.h"
#include "legumepourpotage.h"

Herbe* IngredientPourPotageFactory::createHerbe()
{
    return new HerbePourPotage();
}

Huile* IngredientPourPotageFactory::createHuile()
{
    return new HuilePourPotage();
}

Legume* IngredientPourPotageFactory::createLegume()
{
    return new LegumePourPotage();
}
