// I would like to replace "dishwasher" with "galaxy" in this example, but it has a problem.
// Please fix it for me!
// Expected output: In a galaxy far far away

#include <iostream>
#include <string>

//std::string replace (&std::string, &std::string);

int main()
{

    std::string example("In a dishwasher far far away");
    //example.replace("dishwasher", "galaxy");
example.replace(5, 10, "galaxy");


    std::cout << example << std::endl;

    return 0;
}