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
         << "|Programme r�alis� par :                    |" << endl
         << "|                        - Diego Antognini  |" << endl
         << "|                        - Alexandre Perez  |" << endl
         << "|                        - S�bastien Vaucher|" << endl
         << "|===========================================|" << endl << endl;
}

int main()
{
    setlocale(LC_ALL, "frs");

    afficherCredits();
    Commande c;
    for(int i = 0;i < 4; ++i)//4 pour bien voir qu'il n'y a plus de changement d'�tat apr�s l'�tat <<Envoy�e>>
    {
        c.traiterCommande();
        cout << "Appuyer sur [Enter] pour passer � l'�tat suivant" << endl;
        cin.get();
    }

    return 0;
}
