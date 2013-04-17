#include "../include/banane.h"
#include <iostream>

using namespace std;

Banane::Banane()
{
    nomDuFruit = "Banane";
    pepin = false;
}

void Banane::afficherFruit()
{
    cout << nomDuFruit;
}

bool Banane::avecOuSansPepin()
{
    return pepin;
}
