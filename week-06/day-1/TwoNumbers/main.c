// Create a program that prints a few operations on two numbers: 22 and 13

// Print the result of 13 added to 22

// Print the result of 13 substracted from 22

// Print the result of 22 multiplied by 13

// Print the result of 22 divided by 13 (as a decimal fraction)

// Print the reminder of 22 divided by 13

// Store the results in variables and use them when you display the result

#include <stdio.h>

int main()
{
    int a = 13;
    int b = 22;

    int sum = a + b;
    int difference = b - a;
    int product = a * b;
    float quotient = (float) a / b;
    int modulo = b % a;


    printf("a + b = %d \n", sum);
printf("b - a = %d \n", difference);
printf("a * b = %d \n", product);
printf("a / b = %.3f \n", quotient);
printf("a %% b = %d \n", modulo);


    return 0;
}