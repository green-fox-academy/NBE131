#include <stdio.h>
#include <stdlib.h>

// Write a function that takes a car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

enum car_type
{
    VOLVO, TOYOTA, LAND_ROVER, TESLA
};


struct car
{
    enum car_type type;
    double km;
    double gas;
};


void car_stats(struct car);


int main()
{
    struct car volvo;

    volvo.type = VOLVO;
    volvo.km = 233000;
    volvo.gas = 34;


    struct car tesla;

    tesla.type = TESLA;
    tesla.km = 733000;
    tesla.gas = 270;


    car_stats(volvo);
    car_stats(tesla);


    return 0;
}


void car_stats(struct car car)
{

    printf("Car type: %d \n", car.type);
    printf("Car mileage: %.1lf \n", car.km);

    if (car.type != 3) {
        printf("Car gas level: %.1lf \n", car.gas);

    }


}