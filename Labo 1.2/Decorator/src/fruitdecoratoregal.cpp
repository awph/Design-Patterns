#include "../include/fruitdecoratoregal.h"

FruitDecoratorEgal::FruitDecoratorEgal(Fruit *fruit) : FruitDecorator(fruit)
{
    m_decoratorChar = '=';
}

FruitDecoratorEgal::~FruitDecoratorEgal()
{
    //dtor
}
