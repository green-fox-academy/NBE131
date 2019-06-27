#include <iostream>

int main() {
    std::cout << "Old McDonald had a farm E-I-E-I-O" << std::endl;
    std::cout << "On that farm he had [please enter an integer]: " ;

    int numberOfChicken;

    std::cin >> numberOfChicken;
    std::cout <<  "chicks E-I-E-I-O" << std::endl;
    std::cout << "On that farm he had [please enter an integer]: " ;

    int numberOfPigs;

    std::cin >> numberOfPigs;
    std::cout  << " pigs E-I-E-I-O" << std::endl;

    int numberOfLegs = numberOfChicken * 2 + numberOfPigs * 4;

    std::cout << "All that animals had some " << numberOfLegs << " legs, E-I-E-I-O" << std::endl;

    return 0;
}