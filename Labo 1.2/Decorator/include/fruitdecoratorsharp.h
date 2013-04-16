#ifndef FRUITDECORATORSHARP_H
#define FRUITDECORATORSHARP_H

#include "fruitdecorator.h"

class FruitDecoratorSharp : public FruitDecorator
{
    public:
        FruitDecoratorSharp(Fruit *fruit);
        virtual ~FruitDecoratorSharp();
    protected:
    private:
};

#endif // FRUITDECORATORSHARP_H
