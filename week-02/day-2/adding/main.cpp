#include <iostream>

int main()
{
    // Add two numbers using pointers

    int a = 20;
    int b = 17;

    int *ptrA = &a;
    int *ptrB = &b;

    //int sum = (*ptrA + *ptrB);


    std::cout << "The sum of the two stored values is:" <<  (*ptrA + *ptrB) << std::endl;
    return 0;
}