#include <iostream>

// - Create an array variable named `s`
//   with the following content: `[1, 2, 3, 8, 5, 6]`
// - Change the 8 to 4
// - Print the fourth element
int main()
{
    int s[] = {1, 2, 3, 8, 5, 6};

    std::cout << "Hello, World!" << std::endl;
    std::cout << "The fourth element of the predefined array is: ";

    std::cout << s[3] << std::endl;
    s[3] = 4;

    std::cout << std::endl;

    std::cout << "The changed fourth element of the predefined array is: ";

    std::cout << s[3] << std::endl;

    return 0;
}