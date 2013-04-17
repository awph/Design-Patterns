#include <iostream>
#include "../include/fruitdecorator.h"

FruitDecorator::FruitDecorator(Fruit *fruit) : m_fruit(fruit) { }

FruitDecorator::~FruitDecorator() { delete m_fruit; }

void FruitDecorator::afficherFruit()
{
    for(int i = 0; i < 30 ; ++i)
        std::cout << m_decoratorChar;
    std::cout << std::endl;
    m_fruit->afficherFruit();
    std::cout << std::endl;
    for(int i = 0; i < 30 ; ++i)
        std::cout << m_decoratorChar;
}
