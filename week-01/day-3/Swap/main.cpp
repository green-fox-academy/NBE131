#include <iostream>

int main() {
    int a = 123;
    int b = 526;

    std::cout << "Hello, World!" << std::endl << std::endl;

    std::cout << "a before:" << a << std::endl;
    std::cout << "b before:" << b << std::endl << std::endl;

    std::swap (a , b);

    std::cout << "a after:" << a << std::endl;
    std::cout << "b after:" << b << std::endl;


    return 0;
}