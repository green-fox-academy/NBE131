#include <stdio.h>
#include <stdlib.h>
#include "time.h"

// with calloc
// please allocate a 10 long array and fill it with 5!! numbers from 0 to 4, then print the whole array
// please delete the array before the program exits
// what's the difference between this and the previous exercise?

// Answer: the allocated memory will be clean-filled with 0-s a priori.


int main()
{
    srand(time(0));

    int *pointer = NULL;

    pointer = (int *) calloc(10, sizeof(int));


    for (int i = 0; i < 5; ++i) {

        pointer[i] = rand() % 10;
    }


    for (int j = 0; j < 5; ++j) {
        printf("%d \n", pointer[j]);
    }


    free(pointer);


    return 0;
}
