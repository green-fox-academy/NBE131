#ifndef ZOO_REPTILE_H
#define ZOO_REPTILE_H

#include "EggLayer.h"


class Reptile : public EggLayer
{
public:
    explicit Reptile(std::string name);

    std::string getName() override;

};


#endif //ZOO_REPTILE_H
