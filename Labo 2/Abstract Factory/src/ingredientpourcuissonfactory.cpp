#include "../include/ingredientpourcuissonfactory.h"
#include "../include/herbepourcuisson.h"
#include "../include/huilepourcuisson.h"
#include "../include/legumepourcuisson.h"

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
