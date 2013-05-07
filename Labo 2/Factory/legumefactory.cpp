#include "legumefactory.h"
#include "legumepourcuisson.h"
#include "legumepourpotage.h"
#include "legumepoursalade.h"
#include "legumepourvapeur.h"

Legume* LegumeFactory::createLegume(TypeLegume type)
{
    switch(type)
    {
        case Salade:
            return new LegumePourSalade();
        case Cuisson:
            return new LegumePourCuisson();
        case Vapeur:
            return new LegumePourVapeur();
        case Potage:
            return new LegumePourPotage();
        default:
            return 0;
    }
}
