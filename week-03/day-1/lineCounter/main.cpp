// Write a function that takes a filename as string,
// then returns the number of lines the file contains.
// It should return zero if it can't open the file

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <exception>

int lineCounter(std::string);

int main()
{
    std::vector<std::string> fileContents = {
            "Boci boci tarka", "Se fule se farka", "Oda megyunk lakni", "Ahol tejet kapni.", "teszt"

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
    try {

        std::cout << "Number of lines in input file is: " << lineCounter("../myFile.txt") << std::endl;
    }
    catch (std::string &error) {
        std::cout << error << std::endl;
    }

    return 0;
}

int lineCounter(std::string inputFile)
{
    std::ifstream fileIn(inputFile);
    if (fileIn.is_open()) {
        std::vector<std::string> input{

        };
        std::string line;
        while (getline(fileIn, line)) {
            input.push_back(line);
        }
        return input.size();
    } else {
        throw std::string("Couldn't open file to read.");
    }

}