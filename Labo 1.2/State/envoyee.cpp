#include "envoyee.h"
#include "commande.h"
#include <iostream>

void Envoyee::traiterCommande(Commande* com)
{
    std::cout << "La commande a bien �t� envoy�e !" << std::endl;
}
