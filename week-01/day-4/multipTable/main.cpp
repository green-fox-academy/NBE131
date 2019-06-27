#include <iostream>

int main() {
    std::cout << "Hello, please give an integer for the multiplcation table:" << std::endl;
    int baseNumber;
    std::cin >> baseNumber;

    for (int i = 1; i < 11; ++i) {

        int result = i * baseNumber;
        std::cout << i << "*" << baseNumber << "=" << result << std::endl;
    }

    return 0;
}