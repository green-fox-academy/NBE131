#include "myClass.h"
#include <string>
#include <algorithm>

myClass::myClass()
{

}

std::string myClass::getApple()
{
    return "apple";
}

int myClass::sum(std::vector<int> _inputVector)
{
    int _sum = 0;
    for (int i = 0; i < _inputVector.size(); ++i) {
        _sum = _sum + _inputVector[i];
    }
    return _sum;
}

bool myClass::isAnagram(const std::string &_string1, const std::string &_string2)
{
    if ((_string1.size()) != (_string2.size())) {
        return false;
    } else {
        std::string sorted1 = _string1;
        std::string sorted2 = _string2;

        std::sort(sorted1.begin(), sorted1.end());
        std::sort(sorted2.begin(), sorted2.end());

        for (int i = 0; i < sorted1.size(); ++i) {
            if (sorted1[i] != sorted2[i]) {
                return false;
            }
        }
        return true;
    }

}

int myClass::fibonacci(unsigned int input)
{
    int prevPrevNumber = 0;
    int prevNumber = 1;
    int n = 0;

    if (input <= 1) {
        return 0;
    } else if (input == 2) {
        return 1;
    } else if (input > 2) {

        for (int i = 0; i < input - 2; ++i) {
            n = prevPrevNumber + prevNumber;
            prevPrevNumber = prevNumber;
            prevNumber = n;
        }
    }
    return n;
}

