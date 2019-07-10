//Create a PostIt class that has
//a backgroundColor
//a text on it
//a textColor
//Create a few example post-it objects:
//an orange with blue text: "Idea 1"
//a pink with black text: "Awesome"
//a yellow with green text: "Superb!"


#include <iostream>
#include "postit.h"
#include <vector>
#include <string>


int main()
{
    postit First ("Idea", {255, 128, 0}, {0, 0, 255});

    std::cout << "First post-it is ";

    for (int i = 0; i < 3; ++i) {
        std::cout << First.getBackgroundColorRGB() [i] << " ";
    }

    std::cout << "with '" << First.getText() << "' written on it with ";

    for (int j = 0; j < 3; ++j) {
        std::cout << First.getTextColorRGB() [j];
        if (j==2) {
            std::cout << "." << std::endl;
        }else {
            std::cout << ", ";
        }
    }

    postit Second ("Awesome", {255, 0, 128}, {0, 0, 0});

    std::cout << "Second post-it is ";

    for (int i = 0; i < 3; ++i) {
        std::cout << Second.getBackgroundColorRGB() [i] << " ";
    }

    std::cout << "with '" << Second.getText() << "' written on it with ";

    for (int j = 0; j < 3; ++j) {
        std::cout << Second.getTextColorRGB() [j];
        if (j==2) {
            std::cout << "." << std::endl;
        }else {
            std::cout << ", ";
        }
    }


    postit Third ("Superb!", {255, 255, 0}, {0, 255, 0});

    std::cout << "Third post-it is ";

    for (int i = 0; i < 3; ++i) {
        std::cout << Third.getBackgroundColorRGB() [i] << " ";
    }

    std::cout << "with '" << Third.getText() << "' written on it with ";

    for (int j = 0; j < 3; ++j) {
        std::cout << Third.getTextColorRGB() [j];
        if (j==2) {
            std::cout << "." << std::endl;
        }else {
            std::cout << ", ";
        }
    }

    return 0;
}