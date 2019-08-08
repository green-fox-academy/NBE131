#include <stdio.h>
#include <stdlib.h>
#include "time.h"

// Prompt the user to enter a number. -> This number will be X.
// Allocate memory for X numbers.
// Prompt the user to enter X numbers.
// Allocate memory for Y numbers, which is the sum of the X numbers.
// Fill that array with from 1 to Y, then print them.


int main()
{
    srand(time(0));

    unsigned int *pointer = NULL;
    unsigned int x;

    printf("Please give a positive integer number: ");
    scanf("%d", &x);

    pointer = (unsigned int *) malloc(x * sizeof(unsigned int));

    for (int m = 0; m < x; ++m) {
        unsigned int filler;
        printf("Please give a positive integer number: ");

        scanf("%d", &filler);
        pointer[m] = filler;
    }

    unsigned int y = 0;

    for (int n = 0; n < x; ++n) {
        y += pointer[n];
    }


    unsigned int *pointer2 = NULL;

    pointer2 = (unsigned int *) malloc(y * sizeof(unsigned int));


    for (int i = 0; i < y; ++i) {

        int number = rand() % 1000;

        pointer2[i] = number;

    }


    for (int j = 0; j < y; ++j) {
        printf("%d \n", pointer2[j]);
    }


    // pointer2 = realloc(pointer, 20 * sizeof(int));


    free(pointer);
    free(pointer2);

    return 0;
}