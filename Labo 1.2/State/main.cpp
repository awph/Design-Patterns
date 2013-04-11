#include "commande.h"

#include <clocale>

int main()
{
    setlocale(LC_ALL, "frs");

    Commande c;
    for(int i = 0;i < 5; ++i)//5 pour bien voir qu'il n'y a plus de changement d'état après l'état <<Envoyée>>
        c.traiterCommande();

    return 0;
}
