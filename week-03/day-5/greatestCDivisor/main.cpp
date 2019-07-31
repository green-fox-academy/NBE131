//Find the greatest common divisor of two numbers using recursion.

#include <iostream>

int greatestCD(int, int);

int main()
{
    std::cout << "Hello, please give the first integer for searching greatest common divisor: ";

    int number1;
    std::cin >> number1;
    std::cout << "Please give the second one: ";

    int number2;
    std::cin >> number2;

    std::cout << "The greatest common divisor of " << number1 << " and " << number2 << " is: "
              << greatestCD(number1, number2);


    return 0;
}

int greatestCD(int number1, int number2)
{
    /* int result = 0;
     int divider = 1;

     if ((number1 % divider == 0) && (number2 % divider == 0)) {
         return divider;
     }

     if ((divider <= number1) && (divider <= number2)) {
         divider += 1;
         return greatestCD(number1, number2);


     }*/ //so close... :D

    if (number2 == 0)
        return number1;
    return greatestCD(number2, number1 % number2);

}
