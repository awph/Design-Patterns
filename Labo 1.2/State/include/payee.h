#ifndef PAYEE_H
#define PAYEE_H

#include "statut.h"

class Commande;

class Payee : public Statut
{
public:
    void traiterCommande(Commande* com);
};
#endif
