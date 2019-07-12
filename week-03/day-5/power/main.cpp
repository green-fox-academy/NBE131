//Given base and n that are both 1 or more, compute recursively (no loops) the value of base to the n power,
// so powerN(3, 2) is 9 (3 squared).

#include <iostream>

int powerN(int, unsigned int);

int main()
{
    std::cout << "Hello, please give a base integer: ";

    int base;

    std::cin >> base;

    std::cout << "Please give the (positive) power to lift to: ";

    unsigned int power;
    std::cin >> power;

    std::cout << std::endl << "The result is: " << powerN(base, power);


    return 0;
}

int powerN(int base, unsigned int power)
{
    int result;

    if (base < 0) {
        return 0;
    }

    if (power == 0) {
        return 1;
    }

    result = base * powerN(base, power - 1);

    return result;

}