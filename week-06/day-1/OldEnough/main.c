// Create a program which asks for the age of the user and stores it
// Create a function which takes that age as a parameter and returns if the user is
// old enough to buy himself alcohol in Hungary

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;

    printf("Hello,  please give your age in years: \n");

    scanf("%d", &age);

    if (age > 18) {
        printf("You are old enough to buy alcohol in Hungary \n");
    } else {
        printf("You aren't old enough to buy alcohol in Hungary \n");
    }


    return 0;
}