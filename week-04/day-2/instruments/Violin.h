#ifndef INSTRUMENTS_VIOLIN_H
#define INSTRUMENTS_VIOLIN_H

#include "StringedInstrument.h"

class Violin : public StringedInstrument
{
public:


    Violin();

    explicit Violin(int numberOfStrings);

    std::string sound() override;


};


#endif //INSTRUMENTS_VIOLIN_H
