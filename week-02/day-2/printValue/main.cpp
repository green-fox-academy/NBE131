#include <iostream>

int main()
{

    // Print out the value of the variable called 'age' using a pointer
    // (you have to create the pointer first)

    int age = 35;
    int *agePtr = &age;


    std::cout << "Value of Age variable is: " << *agePtr << std::endl;
    return 0;
}