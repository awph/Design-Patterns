#ifndef EN_ATTENTE_H
#define EN_ATTENTE_H

#include "statut.h"

class Commande;

class EnAttente : public Statut
{
public:
	void traiterCommande(Commande* com);
};
#endif
