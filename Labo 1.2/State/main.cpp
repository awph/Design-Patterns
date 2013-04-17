#include "commande.h"

#include <iostream>
#include <clocale>
#include <string>

using namespace std;
void clear()
{
	cout << string(50, '\n' );
}

void afficherCredits()
{
    clear();
    cout << "|===========================================|" << endl
         << "|Programme réalisé par :                    |" << endl
         << "|                        - Diego Antognini  |" << endl
         << "|                        - Alexandre Perez  |" << endl
         << "|                        - Sébastien Vaucher|" << endl
         << "|===========================================|" << endl << endl;
}

int main()
{
    setlocale(LC_ALL, "frs");


    Commande c;
    char choix=0;
    while(choix != 'q')
    {
        afficherCredits();
        cout << "État actuel : " << endl;
        c.traiterCommande();
        cout << endl << "Actions :" << endl << "s : Passer à l'état suivant" << endl << "q : Quitter" << endl << endl;
        cout << "Choix : ";
        cin >> choix;
    }

    return 0;
}
