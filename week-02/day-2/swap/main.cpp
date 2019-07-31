#include <iostream>

void swapper(int &, int &);

int main()
{
    // Create a function which swaps the values of 'a' and 'b'
    // This time use a void function and pointers

    int a = 10;
    int b = 316;

    std::cout << "Old a: " << a << std::endl;
    std::cout << "Old b: " << b << std::endl;


    swapper(a, b);

    std::cout << "New a: " << a << std::endl;
    std::cout << "New b: " << b << std::endl;


    return 0;
}


void swapper(int& a, int &b)
{
    int *aPtr = &a;
    int *bPtr = &b;

    std::swap(*aPtr, *bPtr);

}