#include <iostream>

int main() {
    std::cout << "Hello, this program will print the bigger of two numbers!" << std::endl;
    std::cout << "Please enter the first number:" ;

    float firstNumber;
    std::cin >> firstNumber;

    std::cout << "Please enter the second number:" ;

    float secondNumber;
    std::cin >> secondNumber;

    if (firstNumber > secondNumber) {
        std::cout << firstNumber << " is bigger." << std::endl;
    } else if (secondNumber > firstNumber){
        std::cout << secondNumber << " is bigger." << std::endl;
    } else {
        std::cout << "The two numbers are even." << std::endl;
    }


    return 0;
}