#include <stdio.h>
#include <stdint.h>

// Use the Computer struct, give values to the fields and print them out in the main!
// Use the Notebook struct, give values to the fields and print them out in the main!

struct Computer
{
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
};


typedef struct
{
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
} Notebook;


int main()
{

    struct Computer dell;
    dell.cpu_speed_GHz = 2.3;
    dell.ram_size_GB = 8;
    dell.bits = 64;


    Notebook IBM;

    IBM.cpu_speed_GHz = 1.7;
    IBM.ram_size_GB = 2;
    IBM.bits =32;


    printf("Dell CPU: %.2f GHz.\n", dell.cpu_speed_GHz);
    printf("Dell RAM: %d GB.\n", dell.ram_size_GB);
    printf("Dell bandwidth: %.d bits.\n", dell.bits);

    printf("IBM CPU: %.2f GHz.\n", IBM.cpu_speed_GHz);
    printf("IBM RAM: %d GB.\n", IBM.ram_size_GB);
    printf("IBM bandwidth: %.d bits.\n", IBM.bits);



    return 0;
}