// define a variable called PI with the value of 3.14
// create a function which takes the radius of a circle as a parameter
// and return the area of that cirle
// area = radius * radius * PI

#define PI 3.1415

#include <stdio.h>
#include <stdlib.h>

double area(float);

int main()
{
    float radius;

    printf("Please give radius of circle: \n");

    scanf("%f", &radius);

    printf("Area of circle: %lf \n", area(radius));

    return 0;
}

double area(float radius)
{
    double area = radius * radius * PI;

    return area;

}