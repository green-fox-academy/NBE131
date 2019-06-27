#include <iostream>

int main() {
    std::cout << "Hello, please give me the side lenght of the square to draw: " << std::endl;
    int side;
    std::cin >> side;
    std::cout << std::endl;

    for (int i = 0; i < side; ++i) {
        std::cout << "%";
    }
    std::cout << std::endl;

    for (int j = 0; j < side-2; ++j) {
        std::cout << "%";
        for (int i = 0; i < side-2; ++i) {
            std::cout << " ";
        }

        std::cout << "%" << std::endl;
    }
    for (int i = 0; i < side; ++i) {
        std::cout << "%";
    }


    return 0;
}