#include <iostream>

int main() {
    std::cout << "Hello, please enter the number of girls coming to the party:";

    int girls;
    std::cin >> girls;

    std::cout << "Please enter the number of boys coming to the party:";

    int boys;
    std::cin >> boys;

    if ((girls + boys) >= 20 && girls == boys) {
        std:: cout << "It's a potentially excellent party." << std::endl;
    } else if ((girls + boys) >= 20 && girls != boys && girls != 0) {
        std:: cout << "It can become quite a c00l party." << std::endl;
    } else if ((girls + boys) < 20 && girls != 0) {
        std:: cout << "It seems to be an average party." << std::endl;
    } else if (girls == 0 && boys != 0){
        std:: cout << "This looks like a sausage party. "
                      "Are you sure you want to proceed?" << std::endl;
    } else {
        std:: cout << "A party without people is like..." << std::endl;}


    return 0;
}