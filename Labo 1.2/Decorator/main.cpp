#include <iostream>

#include "include/pomme.h"
#include "include/fruitdecoratoregal.h"
#include "include/fruitdecoratorsharp.h"
#include "include/fruitdecoratorstar.h"

using namespace std;

int main()
{
    Pomme *p = new Pomme();
    FruitDecoratorEgal *pde = new FruitDecoratorEgal(p);
    FruitDecoratorSharp *pds = new FruitDecoratorSharp(pde);
    FruitDecoratorStar *pdst = new FruitDecoratorStar(pds);

    p->afficherFruit();
    cout << endl;
    cout << endl;
    pde->afficherFruit();
    cout << endl;
    cout << endl;
    pds->afficherFruit();
    cout << endl;
    cout << endl;
    pdst->afficherFruit();

    delete p;
    delete pde;
    delete pds;
    delete pdst;

    return 0;
}
