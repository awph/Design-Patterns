#ifndef COMMANDE_H
#define COMMANDE_H

class Statut;

class Commande
{
public:
    Commande();
    ~Commande();

	void traiterCommande();
	void setState(Statut* s);

private:
    Statut* statut;
};
#endif
