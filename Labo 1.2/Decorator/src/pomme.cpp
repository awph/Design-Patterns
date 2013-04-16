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
}

bool Pomme::avecOuSansPepin()
{
    return pepin;
}
