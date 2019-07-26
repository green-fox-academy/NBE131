#include "ElectricGuitar.h"
#include <iostream>


ElectricGuitar::ElectricGuitar(int numberOfStrings) : StringedInstrument("Electric Guitar", numberOfStrings)
{}

ElectricGuitar::ElectricGuitar() : StringedInstrument("Electric Guitar", 6)
{}


std::string ElectricGuitar::sound()
{
    return "Twang";
}




