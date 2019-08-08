#include <iostream>
#include <array>
#include<string>

int *minFinder(int [], int);

int main()
{
    // Create a function which takes an array (and its length) as a parameter
    // and returns a pointer to its minimum value

    int numbers[] = {12, 4, 66, 101, 87, 3, 15};


    int size = sizeof(numbers) / sizeof(numbers[0]);

    //std::cout << size;


    int pos = 0;
    for (int i = 0; i < size; ++i) {
        if (numbers[i] == *(minFinder(numbers, size))) {
            pos = i;
        }
    }

    std::cout << "Minimum value stored in input array is: " << std::to_string(*minFinder(numbers, size)) <<
              ". (At address: " << (minFinder(numbers, size)) << ", and index " << pos << ".)" << std::endl;

    return 0;
}


int *minFinder(int numbers[], int size)
{

    int smallest = numbers[0];

    int *smallestPtr = nullptr;

    for (int i = 0; i < size; ++i) {

        if (numbers[i] < smallest) {

            smallestPtr = &numbers[i];

        }

    }

    return smallestPtr;
}