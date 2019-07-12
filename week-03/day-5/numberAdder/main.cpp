//Write a recursive function that takes one parameter: n and adds numbers from 1 to n.

#include <iostream>

int adder(int);

int main()
{
    std::cout << "Hello, please give a positive integer to sum to:" << std::endl;

    int input;

    std::cin >> input;

    std::cout << "The sum is: " << adder(input);

    return 0;
}

int adder(int input)
{
 if (input == 0){
     return 0;
 }

    int result = input + adder(input - 1);

    return result;


}