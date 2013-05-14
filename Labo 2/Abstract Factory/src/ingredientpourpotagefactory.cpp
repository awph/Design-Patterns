#include "../include/ingredientpourpotagefactory.h"
#include "../include/herbepourpotage.h"
#include "../include/huilepourpotage.h"
#include "../include/legumepourpotage.h"

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
