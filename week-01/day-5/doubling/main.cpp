#include <iostream>
// - Create an integer variable named `baseNum` and assign the value `123` to it
// - Create a function called `doubling` that doubles it's input parameter and returns with an integer
// - Print the result of `doubling(baseNum)`

int doubler(int a);

int main()
{
    int baseNum = 123;
    std::cout << "Hello, World! base number is: " << std::endl;
    std::cout << baseNum << std::endl;
    std::cout << "Hello, World! base number doubled is: " << std::endl;

    std::cout << doubler(baseNum) << std::endl;

    return 0;
}

int doubler(int a)
{
    int result = 2 * a;
    return result;
}