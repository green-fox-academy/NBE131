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

char *to_string(struct car);

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

    printf("Car type: %s \n", to_string(car));
    printf("Car mileage: %.1lf \n", car.km);

    if (car.type != TESLA) {
        printf("Car gas level: %.1lf \n", car.gas);

    }


}

char *to_string(struct car car)
{

    switch (car.type) {
        case 0:
            return "Volvo";

        case 1:
            return "Toyota";

        case 2:
            return "Land Rover";

        case 3:
            return "Tesla";
    }
}