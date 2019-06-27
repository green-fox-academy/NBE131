#include <iostream>

int main() {
    std::string userName;
    std::cout << "Please enter your name: ";
    std::cin >> userName;
    std::cout << "Hello, " << userName << "!" << std::endl;
    return 0;
}