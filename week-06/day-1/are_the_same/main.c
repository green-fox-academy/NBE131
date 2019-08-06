// Create a program which asks for two strings and stores them
// Create a function which takes two strings as parameters and
// returns 1 if the two strings are the same and 0 otherwise
// Try to erase small and uppercase sensitivity.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string1[255];
    char string2[255];

    printf("Please give the first string: \n");

    scanf("%s", string1);

    printf("Please give the second string: \n");

    scanf("%s", string2);

    if (strcasecmp(string1, string2) == 0) {
        printf("The two strings are equal.");
    } else {
        printf("The two strings aren't equal.");
    }

    return 0;
}