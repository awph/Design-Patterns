#include <iostream>
#include "include/panierdefruit.h"
#include "include/fruit.h"
#include "include/banane.h"
#include "include/fraise.h"
#include "include/pomme.h"
#include <clocale>

using namespace std;

void ajouterFruits(PanierDeFruit *panier)
{
    while(true)
    {
        cout << "Fruit à ajouter (banane, fraise, pomme, panier, finpanier) : " << endl;
        string input;
        cin >> input;

        if(input == "banane")
            panier->ajouterFruit(new Banane());
        else if(input == "fraise")
            panier->ajouterFruit(new Fraise());
        else if(input == "pomme")
            panier->ajouterFruit(new Pomme());
        else if(input == "panier")
        {
            PanierDeFruit *panierInterne = new PanierDeFruit();
            ajouterFruits(panierInterne);
            panier->ajouterFruit(panierInterne);
        }
        else if(input == "finpanier")
            return;
        else
            cout << "Veuillez vérifier votre saisie" << endl;
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
