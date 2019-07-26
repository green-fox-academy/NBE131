#include "BassGuitar.h"
#include <iostream>

BassGuitar::BassGuitar() : StringedInstrument("Bass Guitar", 4)
{}


BassGuitar::BassGuitar(int numberOfStrings) : StringedInstrument("Bass Guitar", numberOfStrings)
{}


std::string BassGuitar::sound()
{
    return "Duum-duum-duum";
}


