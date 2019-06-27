#include <iostream>

int main() {
    std::cout << "Hello, today we're taking our first physical suitability test for the Army. " << std::endl;
    std::cout << "Please enter the number of your legs: ";

    int input;

    std::cin >> input;

    if (input <=0) {
        std::cout << "That's not enough." << std::endl;
    } else if (input==1) {
        std::cout << "That's a good start." << std::endl;
    } else if (input==2) {
        std::cout << "That's quite promising." << std::endl;
    } else {
        std::cout << "That's a lot." << std::endl;
    }

    return 0;
}