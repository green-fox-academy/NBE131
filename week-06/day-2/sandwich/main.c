/*
Create a sandwich struct
It should store:
 - name
 - price (float)
 - weight (float)
Create a function which takes two parameters and returns the price of your order.
The parameters should be:
 - a sandwich struct
 - and an integer that represents how many sandwiches you want to order
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct sandwich
{
    char name[15];
    float price;
    float weight;

} lord_sandwich_t;

float how_much_is_the_fish(lord_sandwich_t *, int);


int main()
{
    lord_sandwich_t mexican;
    strcpy(mexican.name, "Mexican");
    mexican.price = 10;
    mexican.weight = 230;

    lord_sandwich_t fish;
    strcpy(fish.name, "Fish");
    fish.price = 8;
    fish.weight = 210;

    printf("The summed price: %.2f $", how_much_is_the_fish(&fish, 3));


    return 0;
}

float how_much_is_the_fish(lord_sandwich_t *sandwich, int pieces)
{

    float sum = pieces * sandwich->price;


    return sum;
}
