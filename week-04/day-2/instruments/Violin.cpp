#include "Violin.h"
#include <iostream>


Violin::Violin() : StringedInstrument("Violin", 4)
{}


Violin::Violin(int numberOfStrings) : StringedInstrument("Violin", numberOfStrings)
{}


std::string Violin::sound()
{
    return "Screech";
}



