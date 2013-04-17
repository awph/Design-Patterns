#include "../include/fruit.h"
#include <iostream>

using namespace std;

void Fruit::afficherFruit()
{
    cout << "- " << ((avecOuSansPepin()) ? "Avec" : "Sans") << " pépin" << endl;
}
