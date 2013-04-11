#include <iostream>
#include "include/panierdefruit.h"
#include "include/fruit.h"
#include "include/banane.h"
#include "include/fraise.h"
#include "include/pomme.h"
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "frs");

    PanierDeFruit* fruits = new PanierDeFruit();

    fruits->ajouterFruit(new Banane());

    PanierDeFruit* fruits2 = new PanierDeFruit();
    fruits->ajouterFruit(new Pomme());
    fruits->ajouterFruit(new Fraise());
    fruits->ajouterFruit(new Fraise());

    fruits->ajouterFruit(fruits2);
    fruits2->ajouterFruit(new Fraise());
    fruits2->ajouterFruit(new Fraise());
    fruits->ajouterFruit(new Pomme());

    fruits->afficherFruit();
    cout << endl;
    cout << "Pépins : " << boolalpha << fruits->avecOuSansPepin();

    delete fruits;

    return 0;
}
