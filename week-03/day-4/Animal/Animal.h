#ifndef ANIMAL_ANIMAL_H
#define ANIMAL_ANIMAL_H
#include <iostream>


class Animal

{
public:
    Animal();

    unsigned int getHunger() const;

    unsigned int getThirst() const;

    void eat();
    void drink();
    void play();


private:
    unsigned int _hunger;
    unsigned int _thirst;


};


#endif //ANIMAL_ANIMAL_H
