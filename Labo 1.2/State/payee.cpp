#include "payee.h"
#include "envoyee.h"
#include "commande.h"

#include <iostream>

void Payee::traiterCommande(Commande* com)
{
    std::cout << "La commande a bien �t� trait�e !" << std::endl;
    com->setState(new Envoyee());
}
