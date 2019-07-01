#include <iostream>
// - Create an array variable named `t`
//    with the following content: `[1, 2, 3, 4, 5]`
// - Increment the third element
// - Print the third element

int main()
{
    int t[] = {1, 2, 3, 4, 5};

    std::cout << "Hello, World!" << std::endl;
    std::cout << "The third element of the predefined array is: " << std::endl;
    std::cout << t[2] << std::endl;

    t[2]++;

    std::cout << "The changed third element of the predefined array is: " << std::endl;
    std::cout << t[2] << std::endl;


    return 0;
}