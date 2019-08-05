#include <stdio.h>

// Write a program that stores 3 sides of a cuboid as variables (doubles)
// You should get these variables via console input
// The program should write the surface area and volume of the cuboid like:
//
// Surface Area: 600
// Volume: 1000


int main()
{
    double L;
    double H;
    double W;


    printf("Please give the length of the cuboid : \n");
    scanf("%lf", &L);

    printf("Please give the width of the cuboid : \n");
    scanf("%lf", &W);

    printf("Please give the height of the cuboid : \n");

    scanf("%lf", &H);

    double SurfaceArea = 2 * (L * H + L * W + H * W);
    double Volume = L * H * W;

    printf("Area of cuboid: %.3lf \n", SurfaceArea);
    printf("Volume of cuboid: %.3lf \n", Volume);


    return 0;
}
