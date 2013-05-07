#include "ingredientpourvapeurfactory.h"
#include "herbepourvapeur.h"
#include "huilepourvapeur.h"
#include "legumepourvapeur.h"

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
