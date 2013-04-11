#include "enattente.h"
#include "payee.h"
#include "commande.h"
#include <iostream>
void EnAttente::traiterCommande(Commande* com)
{
    com->setState(new Payee());
}
