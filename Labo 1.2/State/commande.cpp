#include "commande.h"
#include "enattente.h"

Commande::Commande()
{
    setState(new EnAttente());
}

void Commande::traiterCommande()
{
    statut->traiterCommande(this);
}

void Commande::setState(Statut* s)
{
    statut = s;
}
