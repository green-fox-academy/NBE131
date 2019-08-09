// Create a program which asks for the name of the user and stores it
// Create a function which takes a string as a parameter and returns the length of it
// Solve this exercise with and without using string.h functions

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int how_long(char[]);

int my_how_long(char[]);


int main()
{
    char name[255];


    printf("Hello, what's your name? \n");
    scanf("%s", name);


    printf("Your name is %d characters long.\n", how_long(name));

    printf("Your name is %d characters long. \n", my_how_long(name));

    return 0;
}


int how_long(char *name)
{
    return strlen(name);
}


int my_how_long(char *name)
{
    int length = 0;

    while (name[length] != 0) {
        length++;
    }

    return length;

}