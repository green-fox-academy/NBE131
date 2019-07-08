// Open a file called "my-file.txt"
// Write your name in it as a single line

#include <iostream>
#include <fstream>

int main()
{

    std::ofstream fileOut("../myFile.txt");
    if (fileOut.is_open()) {
        fileOut << "Hello, my name is: " << std::endl << "Pap Levente" << std::endl;
        fileOut.close();
    } else {
        std::cout << "Couldn't open file to write";
    }
    return 0;
}