// Create a program which asks for a number and stores it
// Create a function which takes a number as a parameter and
// returns 1 if that number is even and returns 0 otherwise
// (in this case 0 is an even number)

#include <stdio.h>
#include <stdlib.h>


int IsEven(int);

int main()
{
    int Number;


    printf("Hello, please give your number \n");
    scanf("%d", &Number);


    printf("%d", IsEven(Number));

    return 0;
}


int IsEven(int Number)
{

    if (Number % 2 == 0) {
        return 1;

    } else {
        return 0;
    }

}