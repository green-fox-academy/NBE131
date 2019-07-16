#ifndef ZOO_ANIMAL_H
#define ZOO_ANIMAL_H

#include <string>

class Animal
{

public:

    virtual std::string getName() = 0;

    virtual std::string breed() = 0;

protected:
    std::string _name;
    int _age;

    //std::string _color;
    //int _numberOfLegs;
    //int _numberOfEyes;
};


#endif //ZOO_ANIMAL_H
