#include <iostream>
#include <string>

// - Create a string variable named `al` and assign the value `Green Fox` to it
// - Create a function called `greet` that greets it's input parameter
// - Greeting is printing e.g. `Greetings dear, Green Fox`
// - Greet `al`

std::string greeter (std::string a1);
int main()
{
    std::string a1 = "Green Fox";
    //std::cout << "Hello, User! Please input your forename: " << std::endl;
    //std::cin >> a1;


    std::cout << greeter (a1);
    return 0;
}

std::string greeter (std::string a1)
{
    //std::string a1;
    std::string a2 = (std::string("Live long and prosper, dear ") + a1);
    return a2;
}