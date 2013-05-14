#include "../include/ingredientpourvapeurfactory.h"
#include "../include/herbepourvapeur.h"
#include "../include/huilepourvapeur.h"
#include "../include/legumepourvapeur.h"

Herbe* IngredientPourVapeurFactory::createHerbe()
{
    return new HerbePourVapeur();
}

Huile* IngredientPourVapeurFactory::createHuile()
{
    return new HuilePourVapeur();
}

Legume* IngredientPourVapeurFactory::createLegume()
{
    return new LegumePourVapeur();
}
