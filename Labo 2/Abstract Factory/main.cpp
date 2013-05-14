#include <iostream>
#include "include/ingredientfactory.h"
#include "include/ingredientpourcuissonfactory.h"
#include "include/ingredientpourpotagefactory.h"
#include "include/ingredientpourvapeurfactory.h"
#include "include/ingredientpoursaladefactory.h"
#include "include/legume.h"
#include "include/typeingredient.h"

using namespace std;

void afficherCredits()
{
    cout << "|===========================================|" << endl
         << "|Programme r�alis� par :                    |" << endl
         << "|                        - S�bastien Vaucher|" << endl
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
        cout << "Quel type de menu souhaitez-vous r�aliser ?" << endl;
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
        cout << endl << "Quel type d'ingr�dient souhaitez-vous utiliser ?" << endl;
        cout << "Choix :" << endl
            << "l : L�gume" << endl
            << "e : Herbe" << endl
            << "u : Huile" << endl
            << "q : Quitter" << endl;
        cout << "Choix : ";

        char choix;
        cin >> choix;

        if(choix == 'q')
            break;

        cout << endl << "L'ingr�dient correspondant est :" << endl;

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
