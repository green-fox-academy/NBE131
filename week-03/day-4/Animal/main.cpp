//Create an Animal class
//      Every animal has a hunger value, which is a whole number
//Every animal has a thirst value, which is a whole number
//when creating a new animal object these values are created with the default 50 value
//        Every animal can eat() which decreases their hunger by one
//Every animal can drink() which decreases their thirst by one
//Every animal can play() which increases both by one

#include <iostream>
#include "Animal.h"

int main()
{
    Animal Tamagochi;

    while (0 < Tamagochi.getHunger() && Tamagochi.getHunger() < 100 && 0 < Tamagochi.getThirst() &&
           Tamagochi.getHunger() < 100) {
        std::cout << "Your Tamagochi's thirst value: " << Tamagochi.getThirst() << std::endl;
        std::cout << "Your Tamagochi's hunger value: " << Tamagochi.getHunger() << std::endl;
        std::cout << "What would you like to do? (Eat: 1 Drink: 2 Play: 3): ";

        int action;

        std::cin >> action;

        switch (action) {
            case 1 :
                Tamagochi.eat();
                break;
            case 2 :
                Tamagochi.drink();
                break;
            case 3 :
                Tamagochi.play();
                break;
            default :
                std::cout << "Please enter a valid choice!" << std::endl;
        }

    }

    std::cout << "GAME OVER - unfortunately, your tamagochi died of nutrition problems." << std::endl;

    return 0;
}