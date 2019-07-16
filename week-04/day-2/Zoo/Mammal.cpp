#include "Mammal.h"

Mammal::Mammal(std::string name)
{
    _name = name;
}

std::string Mammal::getName()
{
    return _name;
}