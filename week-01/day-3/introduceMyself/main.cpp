#include <iostream>

int main() {
    std::string myName = "Levente";
    int myAge = 35;
    double myHeight = 1.85;
    double myWeight = 102.3;
    float BMI = myWeight / (myHeight*myHeight);
    bool maritalStatus = false;
    int myFavouriteNumber = 7;

    std::cout << "Hello, World!" << std::endl << std::endl;
    std::cout << "My name is " << myName <<"." << std::endl;
    std::cout << "I'm " << myAge << " years old." << std::endl;
    std::cout << "My favourite number is " << myFavouriteNumber <<"." << std::endl;
    std::cout << "I'm ";

    if (maritalStatus == true)
    {std::cout << "married." << std::endl;}

    else
        {std::cout << "not married." << std::endl;
    }
    std::cout << "I'm " << myHeight << " meters tall." << std::endl;
    std::cout << "I'm trying to remain under " << myWeight << " kgs besides sitting 10 hours a day, ";
    std::cout << "because my BMI is already " << BMI <<"." << std::endl;
    return 0;
}