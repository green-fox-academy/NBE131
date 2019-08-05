// Create a program which asks for two integers and stores them separately
// Create a function which takes two numbers as parameters and
// returns 1 if they are equal and returns 0 otherwise

#include <stdio.h>
#include <stdlib.h>

int IsEqual(int, int);

int main()
{
    int Number1;
    int Number2;

    printf("Hello, please give the first number \n");
    scanf("%d", &Number1);

    printf("Hello, please give the second number \n");
    scanf("%d", &Number2);

    printf("%d", IsEqual(Number1,Number2));

    return 0;
}

int IsEqual(int Number1, int Number2)
{

    if (Number1 == Number2) {
        return 1;

    } else {
        return 0;
    }

}