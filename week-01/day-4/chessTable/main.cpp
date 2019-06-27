#include <iostream>

int main() {
    std::cout << "Chesstable" << std::endl;

    for (int i = 0; i < 8; ++i) {
        if (i % 2 ==0) {
            for (int j = 0; j < 4; ++j) {
                std::cout << (char)219 << "  ";

            }
            std::cout << std::endl;

        } else {
            for (int j = 0; j < 4; ++j) {
                std::cout << "  " << (char)219;

            }
            std::cout << std::endl;
        }

    }
    return 0;
}