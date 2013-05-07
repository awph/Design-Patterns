#include <iostream>
#include "ingredientfactory.h"
#include "ingredientpourcuissonfactory.h"
#include "ingredientpourpotagefactory.h"
#include "ingredientpourvapeurfactory.h"
#include "ingredientpoursaladefactory.h"
#include "legume.h"
#include "typeingredient.h"

using namespace std;

void afficherCredits()
{
    cout << "|===========================================|" << endl
         << "|Programme réalisé par :                    |" << endl
         << "|                        - Sébastien Vaucher|" << endl
         << "|                        - Alexandre Perez  |" << endl
         << "|                        - Diego Antognini  |" << endl
         << "|===========================================|" << endl << endl;
}

IngredientFactory* factoryForType(TypeIngredient type)
{
    switch(type)
    {
        case Cuisson:
            return new IngredientPourCuissonFactory();
        case Potage:
            return new IngredientPourPotageFactory();
        case Vapeur:
            return new IngredientPourVapeurFactory();
        case Salade:
            return new IngredientPourSaladeFactory();
        default:
            return 0;
    }
}

int main()
{
    setlocale(LC_ALL, "frs");

    afficherCredits();

    IngredientFactory *factory = 0;

    while(factory == 0)
    {
        cout << "Quel type de menu souhaitez-vous réaliser ?" << endl;
        cout << "Choix :" << endl
            << "c : Cuisson" << endl
            << "p : Potage" << endl
            << "s : Salade" << endl
            << "v : Vapeur" << endl
            << "q : Quitter" << endl;
        cout << "Choix : ";

        char choix;
        cin >> choix;

        if(choix == 'q')
            return 0;

        TypeIngredient typemenu = (TypeIngredient)choix;
        factory = factoryForType(typemenu);
    }

    while(true)
    {
        cout << endl << "Quel type d'ingrédient souhaitez-vous utiliser ?" << endl;
        cout << "Choix :" << endl
            << "l : Légume" << endl
            << "e : Herbe" << endl
            << "u : Huile" << endl
            << "q : Quitter" << endl;
        cout << "Choix : ";

        char choix;
        cin >> choix;

        if(choix == 'q')
            break;

        cout << endl << "L'ingrédient correspondant est :" << endl;

        switch(choix)
        {
            case 'l':
            {
                Legume* legume = factory->createLegume();
                legume->display();
                delete legume;
                break;
            }
            case 'e':
            {
                Herbe* herbe = factory->createHerbe();
                herbe->display();
                delete herbe;
                break;
            }
            case 'u':
            {
                Huile* huile = factory->createHuile();
                huile->display();
                delete huile;
                break;
            }
        }
        cout << endl;
    }

    delete factory;

    return 0;
}
