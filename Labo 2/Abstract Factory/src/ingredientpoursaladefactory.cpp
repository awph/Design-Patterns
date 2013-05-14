#include "../include/ingredientpoursaladefactory.h"
#include "../include/herbepoursalade.h"
#include "../include/huilepoursalade.h"
#include "../include/legumepoursalade.h"

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
