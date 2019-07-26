#include "StringedInstrument.h"
#include <iostream>


StringedInstrument::StringedInstrument(const std::string &name, int numberOfStrings) : Instrument(name),
                                                                                       _numberOfStrings(numberOfStrings)
{}

void StringedInstrument::play()
{
    std::cout << _name << " is a(n) " << _numberOfStrings << " - stringed instrument that goes " << sound() << "."
              << std::endl;
}






