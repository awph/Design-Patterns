#ifndef FRUIT_H
#define FRUIT_H

#include <string>

class Fruit
{
    public:
        virtual void afficherFruit() = 0;
        virtual bool avecOuSansPepin() = 0;
    protected:
        bool pepin;
        std::string nomDuFruit;
    private:
};

#endif // FRUIT_H
