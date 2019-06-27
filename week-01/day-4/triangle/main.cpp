#include <iostream>

int main() {
    std::cout << "Hello, this is rectangular triangle drawer." << std::endl;
    std::cout << "Please give a positive integer for the height of our triangle:" << std::endl;

    int height;
    std::cin  >> height;
    std::cout << std::endl;

    for (int i = 0; i < height; ++i) {
        for (int j = 0; j <= i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}