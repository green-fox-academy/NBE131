// Write a function called `sum` that returns the sum of numbers from zero to the given parameter

#include <iostream>


float sumPos(int sumGoal);

float sumNeg(int sumGoal);

int main()
{
    std::cout << "Hello, User! Please give an integer to sum to: " << std::endl;

    int sumGoal;
    std::cin >> sumGoal;

    if (sumGoal >= 0) {
        std::cout << "The sum of numbers from 0 to " << sumGoal << " is " << sumPos(sumGoal) << "." << std::endl;
    } else if (sumGoal < 0) {
        std::cout << "The sum of numbers from 0 to " << sumGoal << " is " << sumNeg(sumGoal) << "." << std::endl;

    }
    return 0;
}

float sumPos(int sumGoal)
{
    float grandTotal = (sumGoal + 1) * ((float) sumGoal / 2);


//for cycle instead of Gauss formula?

    return grandTotal;
}

float sumNeg(int sumGoal)
{

    float grandTotal = (sumGoal - 1) * -((float) sumGoal / 2);

//for cycle instead of Gauss formula?

    return grandTotal;
}