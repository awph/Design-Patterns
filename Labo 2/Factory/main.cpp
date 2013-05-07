#include <iostream>
#include "legumefactory.h"
#include "legume.h"
#include "typelegume.h"

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

int main()
{
    setlocale(LC_ALL, "frs");

    afficherCredits();

    Legume *legume = 0;

    while(legume == 0)
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

        TypeLegume typemenu = (TypeLegume)choix;
        // createLegume retourne 0 si le type est inconnu
        legume = LegumeFactory::createLegume(typemenu);
    }

    cout << endl << endl << "Le légume choisi pour ce type de menu est :" << endl;
    legume->display();

    delete legume;

    return 0;
}
