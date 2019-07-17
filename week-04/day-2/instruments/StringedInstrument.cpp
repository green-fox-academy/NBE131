#include "StringedInstrument.h"
#include <iostream>


StringedInstrument::StringedInstrument()
{

}

void StringedInstrument::play()
{
    std::cout << _name << " is a(n) " << _numberOfStrings << " - stringed instrument that goes " << sound() << "." << std::endl;
}