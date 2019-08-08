#include <stdio.h>
#include <stdlib.h>
#include "time.h"

// please allocate a 10 long array and fill it with even numbers
// please allocate a 10 long array and fill it with odd numbers
// select an array, and push the elements into the another array
// print the array in descending order
// delete the arrays after you don't use them

int main()
{
    srand(time(0));

    int *pointer = NULL;

    pointer = (int *) malloc(10 * sizeof(int));


    int *pointer2 = NULL;

    pointer2 = (int *) malloc(10 * sizeof(int));


    for (int i = 0; i < 10; ++i) {

        int number = rand() % 100;

        if (!(number % 2)) {

            pointer[i] = number;
        } else {
            pointer[i] = number + 1;
        }
    }


    for (int i = 0; i < 10; ++i) {

        int number = rand() % 100;

        if ((number % 2)) {

            pointer2[i] = number;
        } else {
            pointer2[i] = number + 1;
        }
    }


//check on first array
    for (int j = 0; j < 10; ++j) {
        printf("%d \n", pointer[j]);
    }
    printf("\n");

//check on second array
    for (int j = 0; j < 10; ++j) {
        printf("%d \n", pointer2[j]);
    }

    printf("\n");
    printf("\n");


    pointer = realloc(pointer, 20 * sizeof(int));


    for (int k = 0; k < 10; ++k) {
        pointer[k + 10] = pointer2[k];
    }

//check merged array
    for (int j = 0; j < 20; ++j) {
        printf("%d \n", pointer[j]);
    }


    printf("\n");



//Bubble sort
    for (int l = 20; l > 0; --l) {
        for (int i = 0; i < l - 1; ++i) {
            if (pointer[i] > pointer[i + 1]) {
                int temp = pointer[i];
                pointer[i] = pointer[i + 1];
                pointer[i + 1] = temp;

            }
        }
    }


    for (int j = 19; j >= 0; --j) {
        printf("%d \n", pointer[j]);
    }


    free(pointer);
    free(pointer2);

    return 0;
}