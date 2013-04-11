#ifndef STATUT_H
#define STATUT_H

class Commande;

class Statut
{
public:
	virtual void traiterCommande(Commande* com)=0;
	virtual ~Statut(){}
};
#endif
