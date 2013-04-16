#include "../include/fruitdecoratorsharp.h"

FruitDecoratorSharp::FruitDecoratorSharp(Fruit *fruit) : FruitDecorator(fruit)
{
     m_decoratorChar = '#';
}

FruitDecoratorSharp::~FruitDecoratorSharp()
{
    //dtor
}
