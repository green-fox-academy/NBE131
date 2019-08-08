#include <stdio.h>
#include <stdlib.h>
#include "time.h"

// with malloc
// please allocate a 10 long array and fill it with even numbers then print the whole array
// please deallocate memory without using free

int main()
{
    srand(time(0));

    int *pointer = NULL;

    pointer = (int *) malloc(10 * sizeof(int));


    for (int i = 0; i < 10; ++i) {

        int number = rand() % 100;

        if (!(number % 2)) {

            pointer[i] = number;
        } else {
            pointer[i] = number + 1;
        }
    }


    for (int j = 0; j < 10; ++j) {
        printf("%d \n", pointer[j]);
    }
    printf("\n");

    realloc(pointer, 0);
    //free(pointer);

    //double check that the first element is garbage already
    for (int j = 0; j < 1; ++j) {
        printf("%d \n", pointer[j]);
    }


    return 0;
}