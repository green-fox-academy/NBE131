#include "Animal.h"
#include <iostream>


Animal::Animal()
{
    _hunger = 50;
    _thirst = 50;
}

unsigned int Animal::getHunger() const
{
    return _hunger;
}

unsigned int Animal::getThirst() const
{
    return _thirst;
}


void Animal::eat()
{
    _hunger--;
}


void Animal::drink()
{
    _thirst--;
}


void Animal::play()
{
    _hunger++;
    _thirst++;
}