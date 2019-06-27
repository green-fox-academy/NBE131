#include <iostream>
#include <string>

int main() {

    float a = 24;
    //int a = 24;
    int out = 0;
   // int b = static_cast <int> (a);
    //if (static_cast <int> (a) % 2 ==0) {
        out = ++out;
    }
    // if a is even increment out by one

    std::cout << out << std::endl;


    int b = 0;
    if (b < 10) {
        std::string out2 = "Less!";
        std::cout << out2 << std::endl;

    } else if (10 <= b && b <= 20){
        std::string out2 = "Sweet!";
        std::cout << out2 << std::endl;

    } else if (b > 20) {
        std::string out2 = "More!";
        std::cout << out2 << std::endl;
    }

    // if b is between 10 and 20 set out2 to "Sweet!"
    // if less than 10 set out2 to "Less!",
    // if more than 20 set out2 to "More!"

   // std::cout << out2 << std::endl;


    int c = 123;
    int credits = 10;
    bool isBonus = true;
    // if credits are at least 50,
    // and isBonus is false decrement c by 2
    // if credits are smaller than 50,
    // and isBonus is false decrement c by 1
    // if isBonus is true c should remain the same
    if (credits >=50 && isBonus == 0) {
        c = c + 2;
    } else if (credits < 50 && isBonus == 0) {
        c = --c;
    }

    std::cout << c << std::endl;


    int d = 8;
    int time = 120;

    // if d is dividable by 4
    // and time is not more than 200
    // set out3 to "check"
    // if time is more than 200
    // set out3 to "Time out"
    // otherwise set out3 to "Run Forest Run!"
    if (d % 4 ==0 && time <= 200) {
    std::string out3 = "Check";
    } else if (time > 200) {
    std::string out3 = "Time Out";
    } else {
std::string out3 = "Run Forrest, run!";
}
    std::cout << out3 << std::endl;

    return 0;
}