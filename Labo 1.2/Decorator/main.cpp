#include <iostream>
#include <clocale>
#include <cstdlib>

#include "include/panierdefruit.h"
#include "include/fruit.h"
#include "include/banane.h"
#include "include/fraise.h"
#include "include/pomme.h"

#include "include/fruitdecoratoregal.h"
#include "include/fruitdecoratorsharp.h"
#include "include/fruitdecoratorstar.h"

using namespace std;

void ajouterFruits(PanierDeFruit *panier);
int choixFruit();
void afficherCredits();
void decorerFruit(Fruit*&);
void clear();

void ajouterFruits(PanierDeFruit *panier)
{
    while(true)
    {
        afficherCredits();
        int choix = choixFruit();

        switch (choix)
        {
        case 1: //banane
        {
            Fruit *fruit = new Banane();
            decorerFruit(fruit);
            panier->ajouterFruit(fruit);
            break;
        }
        case 2: //fraise
        {
            Fruit *fruit = new Fraise();
            decorerFruit(fruit);
            panier->ajouterFruit(fruit);
            break;
        }
        case 3: //pomme
        {
            Fruit *fruit = new Pomme();
            decorerFruit(fruit);
            panier->ajouterFruit(fruit);
            break;
        }
        case 4: //panier
        {
            PanierDeFruit *panierInterne = new PanierDeFruit();
            Fruit *fruit = panierInterne;
            decorerFruit(fruit);
            panier->ajouterFruit(fruit);
            ajouterFruits(panier);
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

void clear()
{
	cout << string(50, '\n' );
}

int choixFruit()
{
    int choix;
    do
    {
        afficherCredits();
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

void decorerFruit(Fruit *&fruit)
{
    int choix;
    while(choix != 4)
    {
        choix = 0;
        do
        {
            afficherCredits();
            cout << "Menu décoration : " << endl
                << "1) Ajouter une décoration \"=\"" << endl
                << "2) Ajouter une décoration \"#\"" << endl
                << "3) Ajouter une décoration \"*\"" << endl
                << "4) Quitter l'ajout de décoration" << endl
                << "Choix : ";
            cin >> choix;
        }while(choix < 1 || choix > 4);

        switch (choix)
        {
        case 1: //=
            fruit = new FruitDecoratorEgal(fruit);
            break;
        case 2: //#
            fruit = new FruitDecoratorSharp(fruit);
            break;
        case 3: //*
            fruit = new FruitDecoratorStar(fruit);
            break;
        case 4: //stop décoration
            return;
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

    afficherCredits();
    cout << endl << endl <<"Contenu du panier racine :" << endl;
    panierRacine->afficherFruit();
    cout << endl << endl;

    delete panierRacine;

    return 0;
}
