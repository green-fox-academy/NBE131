#include <iostream>

int main()
{
    // Change the value of the variable called 'temperature' using a pointer
    // (you have to create the pointer first)

    float temperature = 21.3;

    std::cout << "Temperature is: " << temperature << std::endl;
    float *tempPtr = &temperature;

    *tempPtr = 23.7;

    std::cout << "Temperature set: " << temperature << std::endl;

    return 0;
}