#ifndef FRUITDECORATORSTAR_H
#define FRUITDECORATORSTAR_H

#include "fruitdecorator.h"

class FruitDecoratorStar : public FruitDecorator
{
    public:
        FruitDecoratorStar(Fruit *fruit);
        virtual ~FruitDecoratorStar();
};

#endif // FRUITDECORATORSTAR_H
