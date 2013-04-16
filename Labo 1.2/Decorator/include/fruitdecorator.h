#ifndef FRUITDECORATOR_H
#define FRUITDECORATOR_H

#include "fruit.h"

class FruitDecorator : public Fruit
{
    public:
        FruitDecorator(Fruit *fruit);
        virtual ~FruitDecorator();
        void afficherFruit();
        bool avecOuSansPepin() { return false; }
    protected:
        char m_decoratorChar;
    private:
        Fruit *m_fruit;
};

#endif // FRUITDECORATOR_H
