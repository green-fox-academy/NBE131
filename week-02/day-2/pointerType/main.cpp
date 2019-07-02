#include <iostream>
#include <string>

int main()
{
    // Create a pointer for each variable and print out the memory addresses of that variables
    // Print out the values of the pointers

    int a = 31;
    double b = 432.2;
    std::string name = "Bob";

    int *ptrA = &a;
    double *ptrB = &b;
    std::string *ptrStr = &name;

    std::cout << "Memory address of pointer  to a: " << &ptrA << std::endl;
    std::cout << "Memory address of pointer  to b: " << &ptrB << std::endl;
    std::cout << "Memory address of pointer  to name: " << &ptrStr << std::endl;

    std::cout << "Memory address of a: " << ptrA << std::endl;
    std::cout << "Memory address of b: " << ptrB << std::endl;
    std::cout << "Memory address of name string: " << ptrStr << std::endl;

    std::cout << "Value stored at address where pointer to a points at: " << *ptrA << std::endl;
    std::cout << "Value stored at address where pointer to b points at: " << *ptrB << std::endl;
    std::cout << "Value stored at address where pointer to name string points at: " << *ptrStr << std::endl;




    return 0;
}