#include "../include/envoyee.h"
#include "../include/commande.h"

#include <iostream>

void Envoyee::traiterCommande(Commande* com)
{
    std::cout << "<<Envoy�e>> : La commande a bien �t� envoy�e !" << std::endl;
}
