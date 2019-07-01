// Create two integer variables: a=15, b=23
// Create a function named swap that gets the 2 integers as parameters and swaps its values.
// Print the values before and after the function call and make sure the values are printed in reversed order.

#include <iostream>

int swap(int &a, int &b);

int main()
{

    int a = 15;
    int b = 23;

    std::cout << "Hello, World!" << std::endl;
    std::cout << "Value of a is: " << a << std::endl;
    std::cout << "Value of b is: " << b << std::endl;

    swap(a, b);

    std::cout << "After swapping" << std::endl;
    std::cout << "Value of a is: " << a << std::endl;
    std::cout << "Value of b is: " << b << std::endl;


    return 0;
}

int swap(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;

    return 0;

}