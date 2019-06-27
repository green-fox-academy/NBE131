#include <iostream>
#include <iomanip>

int main() {

    double distanceInMiles;

    std::cout << "Hello, please enter the distance to convert in miles: ";
    std::cin >> distanceInMiles;
    std::cout << std::endl << std::fixed << std::setprecision(3) << distanceInMiles << " miles equals ";

    double distanceInKms = 1.6 * distanceInMiles;

    std::cout << std::fixed  << std::setprecision(3) << distanceInKms << " kilometres.";

    return 0;
}