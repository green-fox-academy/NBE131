#include <iostream>

int main() {


    std::cout << "Hello, this program will calculate the sum and average of five integer numbers." << std::endl;
    std::cout << "Please enter the first one:";
    int number1;
    std::cin >> number1;
    std::cout << "Please enter the second one:";
    int number2;
    std::cin >> number2;
    std::cout  << "Please enter the third one:";
    int number3;
    std::cin >> number3;
    std::cout << "Please enter the fourth one:";
    int number4;
    std::cin >> number4;
    std::cout << "Please enter the fifth one:";
    int number5;
    std::cin >> number5;

    float sum = number1 + number2 + number3 + number4 + number5;
    float average = sum / 5;

    std::cout << "The sum is: " << sum << std::endl;
    std::cout << "The average is: " << average << std::endl;

    return 0;
}