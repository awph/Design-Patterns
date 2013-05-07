#include "ingredientpoursaladefactory.h"
#include "herbepoursalade.h"
#include "huilepoursalade.h"
#include "legumepoursalade.h"

Herbe* IngredientPourSaladeFactory::createHerbe()
{
    return new HerbePourSalade();
}

Huile* IngredientPourSaladeFactory::createHuile()
{
    return new HuilePourSalade();
}

Legume* IngredientPourSaladeFactory::createLegume()
{
    return new LegumePourSalade();
}
