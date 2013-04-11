#include "envoyee.h"
#include "commande.h"
#include <iostream>

void Envoyee::traiterCommande(Commande* com)
{
    std::cout << "La commande a bien été envoyée !" << std::endl;
}
