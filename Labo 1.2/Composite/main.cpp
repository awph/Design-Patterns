#include <iostream>
#include "include/panierdefruit.h"
#include "include/fruit.h"
#include "include/banane.h"
#include "include/fraise.h"
#include "include/pomme.h"
#include <clocale>
#include <cstdlib>

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
         << "|===========================================|" << endl;
}

int choixFruit()
{
    int choix;
    do
    {
        cout << "Menu principal : " << endl
            << "1) Ajouter une banane" << endl
            << "2) Ajouter une fraise" << endl
            << "3) Ajouter une pomme" << endl
            << "4) Ajouter un panier" << endl
            << "5) Finir panier" << endl
            << "6) Quitter" << endl << endl
            << "Choix : ";
        cin >> choix;
    }while(choix < 1 || choix > 6);
    return choix;
}

void ajouterFruits(PanierDeFruit *panier)
{
    while(true)
    {
        afficherCredits();
        int choix = choixFruit();

        switch (choix)
        {
            case 1: //banane
                panier->ajouterFruit(new Banane());
                break;
            case 2: //fraise
                panier->ajouterFruit(new Fraise());
                break;
            case 3: //pomme
                panier->ajouterFruit(new Pomme());
                break;
            case 4: //panier
            {
                PanierDeFruit *panierInterne = new PanierDeFruit();
                ajouterFruits(panierInterne);
                panier->ajouterFruit(panierInterne);
                break;
            }
            case 5: //Fin panier
                return;
            case 6: //Quitter
                exit(EXIT_SUCCESS);
            default:
                cout << "Veuillez vérifier votre saisie" << endl;
        }
    }
}

int main()
{
    setlocale(LC_ALL, "frs");

    PanierDeFruit* panierRacine = new PanierDeFruit();

    ajouterFruits(panierRacine);

    cout << endl << endl;
    cout << "Contenu du panier racine :" << endl;
    panierRacine->afficherFruit();
    cout << endl;
    cout << "Pépins : " << boolalpha << panierRacine->avecOuSansPepin();

    delete panierRacine;

    return 0;
}
