#include "../include/envoyee.h"
#include "../include/commande.h"

#include <iostream>

void Envoyee::traiterCommande(Commande* com)
{
    std::cout << "<<Envoyée>> : La commande a bien été envoyée !" << std::endl;
}
