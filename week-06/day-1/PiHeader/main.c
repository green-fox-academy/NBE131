#include <stdio.h>
#include "Pi.h"

int main()
{
    float radius;

    printf("Please give radius of circle: \n");

    scanf("%f", &radius);

    printf("Area of circle: %.3lf \n", area(radius));

    printf("Circumference of circle: %.3lf \n", circumference(radius));



    return 0;
}