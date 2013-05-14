#include "../include/legumefactory.h"
#include "../include/legumepourcuisson.h"
#include "../include/legumepourpotage.h"
#include "../include/legumepoursalade.h"
#include "../include/legumepourvapeur.h"

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
