
// Write a program that opens a file called "my-file.txt", then prints
// each line from the file.
// You will have to create the file, you may use C-programming, although it is not mandatory

#include <iostream>
#include <fstream>
#include <vector>
//#include <exception>

int main()
{
    std::vector<std::string> fileContents = {
            "Boci boci tarka", "Se fule se farka", "Oda megyunk lakni", "Ahol tejet kapni."

    };

    std::ofstream fileOut("../myFile.txt");
    if (fileOut.is_open()) {
        for (int i = 0; i < fileContents.size(); ++i) {
            fileOut << fileContents[i] << std::endl;

        }
        fileOut.close();
    } else {
        std::cout << "Couldn't open file to write.";
        return 0;
    }

    std::ifstream fileIn("../myFile.txt");
    if (fileIn.is_open()) {
        std::string line;
        std::cout << "Contents of myFile.txt: " << std::endl;
        while (getline(fileIn, line)) {
            std::cout << line << std::endl;

        }
        fileIn.close();
    } else {
        std::cout << "Couldn't open file to read.";

    }


    return 0;
}