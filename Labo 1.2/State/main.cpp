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


    Commande c;
    char choix=0;
    while(choix != 'q')
    {
        afficherCredits();
        cout << "�tat actuel : " << endl;
        c.traiterCommande();
        cout << endl << "Actions :" << endl << "s : Passer � l'�tat suivant" << endl << "q : Quitter" << endl << endl;
        cout << "Choix : ";
        cin >> choix;
    }

    return 0;
}
