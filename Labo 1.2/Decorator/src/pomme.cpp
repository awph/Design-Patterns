#include "../include/pomme.h"
#include <iostream>

using namespace std;

Pomme::Pomme()
{
    nomDuFruit = "Pomme";
    pepin = true;
}

Pomme::~Pomme()
{
    //dtor
}

void Pomme::afficherFruit()
{
    cout << nomDuFruit;
    Fruit::afficherFruit();
}

bool Pomme::avecOuSansPepin()
{
    return pepin;
}
