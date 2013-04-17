#include "../include/commande.h"
#include "../include/enattente.h"

Commande::Commande():statut(new EnAttente())
{

}

Commande::~Commande()
{
    delete statut;
}

void Commande::traiterCommande()
{
    statut->traiterCommande(this);
}

void Commande::setState(Statut* s)
{
    delete statut;
    statut = s;
}
