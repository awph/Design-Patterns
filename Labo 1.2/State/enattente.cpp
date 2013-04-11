#include "enattente.h"
#include "payee.h"
#include "commande.h"

#include <iostream>

void EnAttente::traiterCommande(Commande* com)
{
    std::cout << "<<EnAttente>> : Rien à afficher" << std::endl;
    com->setState(new Payee());
}
