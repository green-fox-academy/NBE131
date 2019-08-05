// Write a program that prints a few details to the terminal window about you
// It should print each detail to a new line.
//  - Your name
//  - Your age
//  - Your height in meters (as a decimal fraction)
//
//  Use variables to store the informations!
//
//  Example output:
//  John Doe
//  31
//  1.87


#include <stdio.h>

int main()
{
    int age = 35;
    char * name = "Levente";
    float height = 1.85;


    printf("Hello, my name is: %s \n", name);
    printf("I'm %d years old \n", age);
    printf("I'm %.2f meters tall \n", height);


    return 0;
}