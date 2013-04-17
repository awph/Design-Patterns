#ifndef ENVOYEE_H
#define ENVOYEE_H

#include "statut.h"

class Commande;

class Envoyee : public Statut
{
public:
	void traiterCommande(Commande* com);
};
#endif
