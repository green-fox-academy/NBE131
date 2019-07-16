#ifndef ZOO_BIRD_H
#define ZOO_BIRD_H

#include "EggLayer.h"

class Bird : public EggLayer
{
public:
    explicit Bird(std::string name);

    std::string getName() override;

};


#endif //ZOO_BIRD_H
