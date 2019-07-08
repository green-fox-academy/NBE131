// Create a function that takes a number
// divides ten with it,
// and prints the result.
// It should print "fail" if the parameter is 0


#include <iostream>
#include <string>
//#include <exception>

float divideTenWith(int);

int main()
{
    std::cout << "Hello, please enter an integer to divide 10 with: ";
    try {
        int input = 0;
        std::cin >> input;
        std::cout << "The result is: " << divideTenWith(input) << std::endl;
    } catch (std::string &error) {
        std::cout << error << std::endl;
    }


    return 0;
}

float divideTenWith(int input)
{
    if (input != 0) {
        float result = 10.0 / input;
        return result;

    } else {
        throw std::string("Can't divide by 0.");
    }

};