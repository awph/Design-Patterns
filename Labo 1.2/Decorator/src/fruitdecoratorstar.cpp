#include "../include/fruitdecoratorstar.h"

FruitDecoratorStar::FruitDecoratorStar(Fruit *fruit) : FruitDecorator(fruit)
{
    m_decoratorChar = '*';
}

FruitDecoratorStar::~FruitDecoratorStar()
{
    //dtor
}
