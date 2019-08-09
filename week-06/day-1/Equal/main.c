// Create a program which asks for two integers and stores them separately
// Create a function which takes two numbers as parameters and
// returns 1 if they are equal and returns 0 otherwise

#include <stdio.h>
#include <stdlib.h>

int is_equal(int, int);

int main()
{
    int number1;
    int number2;

    printf("Hello, please give the first number \n");
    scanf("%d", &number1);

    printf("Hello, please give the second number \n");
    scanf("%d", &number2);

    printf("%d", is_equal(number1,number2));

    return 0;
}

int is_equal(int number1, int number2)
{

    return number1 == number2;

}