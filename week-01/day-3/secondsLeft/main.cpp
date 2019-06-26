#include <iostream>

int main() {


    int currentHours = 18;
    int currentMinutes = 23;
    int currentSeconds = 42;
    int secondsInADay = 60*60*24;
    int secondsLeft = secondsInADay - (currentHours*60*60+currentMinutes*60+currentSeconds);

    // Write a program that prints the remaining seconds (as an integer) from a
    // day if the current time is represented by the variables

    std::cout << "Hello, World!" << std::endl;
    std::cout << "There are " << secondsLeft << " second(s) left in a day at " << currentHours << ":" << currentMinutes << ":" << currentSeconds << "." << std::endl;
    std::cout << "Carpe diem!" << std::endl;

    return 0;
}