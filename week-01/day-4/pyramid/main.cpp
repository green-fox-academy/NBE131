#include <iostream>

int main() {
    std::cout << "Hello, World! Let's build a pyramid!" << std::endl;
    std::cout << "How high dreams should the pharaoh have? "
                 "(Please enter a positive integer):" << std::endl;

    int height;
    std::cin >> height;
    std::cout << std::endl;

    for (int i = 0; i < height; ++i) {
        for (int j = 0; j <= height - i; ++j) {
            std::cout << " ";
        }
        for (int k = 0; k <= 2 * i; ++k) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }


    return 0;
}