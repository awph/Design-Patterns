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

    afficherCredits();
    Commande c;
    for(int i = 0;i < 4; ++i)//4 pour bien voir qu'il n'y a plus de changement d'état après l'état <<Envoyée>>
    {
        c.traiterCommande();
        cout << "Appuyer sur [Enter] pour passer à l'état suivant" << endl;
        cin.get();
    }

    return 0;
}
