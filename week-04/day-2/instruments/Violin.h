#ifndef INSTRUMENTS_VIOLIN_H
#define INSTRUMENTS_VIOLIN_H

#include "StringedInstrument.h"

class Violin : public StringedInstrument
{
public:


    explicit Violin(int numberOfStrings);

    Violin();

    std::string sound() override;


};


#endif //INSTRUMENTS_VIOLIN_H
