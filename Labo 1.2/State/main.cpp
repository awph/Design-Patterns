#include "commande.h"

#include <clocale>
int main()
{
    setlocale(LC_ALL, "frs");
    Commande c;
    c.traiterCommande();
    c.traiterCommande();
    c.traiterCommande();

    return 0;
}
