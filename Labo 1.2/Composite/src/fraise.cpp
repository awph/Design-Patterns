#include "../include/fraise.h"
#include <iostream>

using namespace std;

Fraise::Fraise()
{
    nomDuFruit = "Fraise";
    pepin = true;
}

Fraise::~Fraise()
{
    //dtor
}

void Fraise::afficherFruit()
{
    cout << nomDuFruit;
}

bool Fraise::avecOuSansPepin()
{
    return pepin;
}
