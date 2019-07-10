// Write a function that reads all lines of a file and writes the read lines to an other file (a.k.a copies the file)
// It should take the filenames as parameters
// It should return a boolean that shows if the copy was successful


#include <iostream>
#include <string>
#include <vector>
#include <fstream>


bool fileCopy(std::string &, std::string &);

int main()
{
    std::cout << "Hello, please type the path of file to copy from: " << std::endl;
    std::string copyFrom;
    std::cin >> copyFrom;

    std::cout << "Please type the path of file to copy to: " << std::endl;
    std::string copyTo;
    std::cin >> copyTo;

    if (fileCopy(copyFrom, copyTo)) {
        std::cout << "Copy was successful." << std::endl;
    } else {
        std::cout << "Copy was unsuccessful." << std::endl;
    }

    return 0;
}

bool fileCopy(std::string &copyFrom, std::string &copyTo)
{
    std::ifstream fileIn(copyFrom);
    std::ofstream fileOut(copyTo);
    if (fileIn.is_open() && fileOut.is_open()) {

        std::string line;

        while (getline(fileIn, line)) {
            fileOut << line << std::endl;
        }
        fileIn.close();
        fileOut.close();
        return true;
    }
    return false;
}