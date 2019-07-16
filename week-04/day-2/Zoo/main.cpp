//We are going to represent a Zoo. The animals are cuter than humans, so let's focus on them right now.
//So we need an abstract Animal class

//        it has name, age class member
//        it has getName() and breed() pure virtual functions
//Have we got all members and functions we should? What about gender? Any other? Write down at least 3 members and/or functions that should be included in Animal.
//Let's think about the kinds of animals Mammals, Reptiles, Birdss etc. We need to define specific members and functions for each. For example every Bird breed() from an egg, doesn't matter if it is a penguin or parrot or ostrich. Write down at least 2 of members and/or functions what is common in each kind.
//Most of the Reptiles breed() by laying eggs too, it is common with Birds.
//Create the project and the classes above.

//We expect the following output:

//How do you breed?
//A Crocodile is breeding by laying eggs.
//A Koala is breeding by pushing miniature versions out.
//A Bird is breeding by laying eggs.

#include <iostream>
#include "Animal.h"
#include "Reptile.h"
#include "Mammal.h"
#include "Bird.h"

int main(int argc, char *args[])
{
    Reptile reptile("Crocodile");
    Mammal mammal("Koala");
    Bird bird("Parrot");

    std::cout << "How do you breed?" << std::endl;
    std::cout << "A " << reptile.getName() << " is breeding by" << reptile.breed() << std::endl;
    std::cout << "A " << mammal.getName() << " is breeding by" << mammal.breed() << std::endl;
    std::cout << "A " << bird.getName() << " is breeding by" << bird.breed() << std::endl;

    return 0;
}