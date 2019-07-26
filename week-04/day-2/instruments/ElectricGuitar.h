#ifndef INSTRUMENTS_ELECTRICGUITAR_H
#define INSTRUMENTS_ELECTRICGUITAR_H

#include "StringedInstrument.h"

class ElectricGuitar : public StringedInstrument
{
public:


    ElectricGuitar();

    explicit ElectricGuitar(int numberOfStrings);

    std::string sound() override;
};


#endif //INSTRUMENTS_ELECTRICGUITAR_H
