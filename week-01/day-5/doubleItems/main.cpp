#include <iostream>

// - Create an array variable named `numList`
//   with the following content: `[3, 4, 5, 6, 7]`
// - Double all the values in the array
int main()
{
    int numList[] = {3, 4, 5, 6, 7};

    std::cout << "Hello, World! This is the predefined array before:" << std::endl;

    for (int i = 0; i < sizeof(numList) / sizeof(numList[0]); ++i) {
        std::cout << numList[i] << std::endl;
    }

    for (int i = 0; i < sizeof(numList) / sizeof(numList[0]); ++i) {
        numList[i] = numList[i] * 2;
    }

    std::cout << "This is the predefined array doubled:" << std::endl;

    for (int i = 0; i < sizeof(numList) / sizeof(numList[0]); ++i) {
        std::cout << numList[i] << std::endl;
    }

    return 0;
}