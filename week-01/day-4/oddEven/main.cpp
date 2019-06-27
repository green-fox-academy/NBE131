#include <iostream>

int main() {
    std::cout << "Hello, this program will test if the entered number is odd or even." << std::endl;


    std::cout << "Please enter an integer:";

    int input;
    std::cin >> input;


    if
        (input%2 ==0) {std::cout << "Your number is even." << std::endl;
    }else {
        std::cout <<  "Your number is odd." << std::endl;
    }

    return 0;
}