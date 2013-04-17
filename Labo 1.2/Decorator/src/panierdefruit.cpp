#include "../include/panierdefruit.h"
#include <iostream>

using namespace std;

PanierDeFruit::PanierDeFruit()
{
    nomDuFruit = "Panier de fruit";
}

PanierDeFruit::~PanierDeFruit()
{
    vector<Fruit *>::iterator it = listeFruits.begin();
    for(; it != listeFruits.end(); ++it)
        delete *it;

    listeFruits.clear();
}

void PanierDeFruit::afficherFruit()
{
    cout << "Panier[" << endl;
    vector<Fruit *>::const_iterator it = listeFruits.begin();
    for(; it != listeFruits.end(); ++it)
    {
        (*it)->afficherFruit();
        if(it + 1 != listeFruits.end())
            cout << ", " << endl;
    }
    cout << "]";
}

bool PanierDeFruit::avecOuSansPepin()
{
    vector<Fruit *>::const_iterator it = listeFruits.begin();
    for(; it != listeFruits.end(); ++it)
    {
        if((*it)->avecOuSansPepin())
            return true;
    }

    return false;
}

void PanierDeFruit::ajouterFruit(Fruit* fruit)
{
    listeFruits.push_back(fruit);
}
