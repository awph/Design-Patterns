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
         << "|Programme r�alis� par :                    |" << endl
         << "|                        - Diego Antognini  |" << endl
         << "|                        - Alexandre Perez  |" << endl
         << "|                        - S�bastien Vaucher|" << endl
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

void afficherPanier(PanierDeFruit* panier)
{
    cout << endl << endl << "Contenu du panier racine :" << endl;
    panier->afficherFruit();
    cout << endl << "P�pins : " << boolalpha << panier->avecOuSansPepin() << endl << endl;
}

void ajouterFruits(PanierDeFruit *panier,PanierDeFruit* panierRacine)
{
    while(true)
    {
        afficherCredits();
        afficherPanier(panierRacine);
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
                panier->ajouterFruit(panierInterne);
                ajouterFruits(panierInterne,panierRacine);
                break;
            }
            case 5: //Fin panier
                return;
            case 6: //Quitter
                exit(EXIT_SUCCESS);
            default:
                cout << "Veuillez v�rifier votre saisie" << endl;
        }
    }
}

int main()
{
    setlocale(LC_ALL, "frs");

    PanierDeFruit* panierRacine = new PanierDeFruit();

    ajouterFruits(panierRacine,panierRacine);

    delete panierRacine;

    return 0;
}
