#include <iostream>


// - Create a function called `factorio`
//   it should calculate its input's factorial.
//   it should not return it, but take an additional integer parameter and overwrite its value.

int factorio(int input, int result);


int main()
{
    std::cout << "Hello, please give a positive integer for factorial calculation :";

    int input;
    std::cin >> input;
    int result = 1;

    factorio(input, result);

    return 0;
}

int factorio(int input, int result)
{
    //int result =1;

    for (int i = 1; i <= input; ++i) {
        result *= i;
    }
    std::cout << "The result for that is: " << result;
    return 0;
}