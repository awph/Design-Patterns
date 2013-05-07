#include "ingredientpourcuissonfactory.h"
#include "herbepourcuisson.h"
#include "huilepourcuisson.h"
#include "legumepourcuisson.h"

Herbe* IngredientPourCuissonFactory::createHerbe()
{
    return new HerbePourCuisson();
}

Huile* IngredientPourCuissonFactory::createHuile()
{
    return new HuilePourCuisson();
}

Legume* IngredientPourCuissonFactory::createLegume()
{
    return new LegumePourCuisson();
}
