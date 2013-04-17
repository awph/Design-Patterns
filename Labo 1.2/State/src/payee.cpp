#include "../include/payee.h"
#include "../include/envoyee.h"
#include "../include/commande.h"

#include <iostream>

void Payee::traiterCommande(Commande* com)
{
    std::cout << "<<Payée>> : La commande a bien été traitée !" << std::endl;
    com->setState(new Envoyee());
}
