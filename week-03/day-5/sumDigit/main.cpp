//Sum Digits
//Given a non-negative integer n, return the sum of its digits recursively (without loops).

//Hint
//Mod (%) by 10 yields the rightmost digit (e.g. 126 % 10 is 6)

//Java, C++, C#, Python
//Divide (/) by 10 removes the rightmost digit (e.g. 126 / 10 is 12).

#include <iostream>

int digitSum(int);

int main()
{
    std::cout << "Hello, please give a positive integer to sum the digits of: ";

    unsigned int input;

    std::cin >> input;

    std::cout << "The sum of the digits is: " << digitSum(input);


    return 0;
}

int digitSum(int input)
{

    int result;

    if (input == 0) {

        return 0;
    } else {

        result = (input % 10) + digitSum(input / 10);

        return result;
    }

}