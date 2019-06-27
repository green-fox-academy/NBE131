#include <iostream>

int main() {
    //for (int i = 1; i < 250; ++i) {
     //   std::cout << (i * 2) << std::endl;

     int startingNumber = 0;
     int endingNumber = 500;
     int divider = 2;
     for (int i = startingNumber; i < endingNumber; ++i) {
        if (i % divider ==0) {
            std::cout << i << std::endl;
    }

    }

    return 0;
}