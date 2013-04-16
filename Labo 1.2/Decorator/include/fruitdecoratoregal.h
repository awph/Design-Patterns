#ifndef FRUITDECORATOREGAL_H
#define FRUITDECORATOREGAL_H

#include "fruitdecorator.h"
#include "fruit.h"

class FruitDecoratorEgal : public FruitDecorator
{
    public:
        FruitDecoratorEgal(Fruit *fruit);
        virtual ~FruitDecoratorEgal();
    protected:
    private:
};

#endif // FRUITDECORATOREGAL_H
