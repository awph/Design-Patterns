#include "../include/payee.h"
#include "../include/envoyee.h"
#include "../include/commande.h"

#include <iostream>

void Payee::traiterCommande(Commande* com)
{
    std::cout << "<<Pay�e>> : La commande a bien �t� trait�e !" << std::endl;
    com->setState(new Envoyee());
}
