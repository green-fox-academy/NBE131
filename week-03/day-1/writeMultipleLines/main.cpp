
// Create a function that takes 3 parameters: a path, a word and a number
// and is able to write into a file.
// The path parameter should be a string that describes the location of the file you wish to modify
// The word parameter should also be a string that will be written to the file as individual lines
// The number parameter should describe how many lines the file should have.
// If the word is "apple" and the number is 5, it should write 5 lines
// into the file and each line should read "apple"

#include <iostream>
#include <fstream>
#include <string>


void fileWriter(std::string&, std::string&, int&);

int main()
{
    std::cout << "Hello, please type the string to store in mLines.txt: " << std::endl;
    std::string text;
    std::cin >> text;

    std::cout << "Hello, please type how many times to store it: " << std::endl;
    int lines;
    std::cin >> lines;
    std::string path = "../mLines.txt";

    fileWriter(path, text, lines);


    return 0;
}

void fileWriter(std::string &path, std::string &text, int &lines)
{

    std::ofstream fileOut(path);
    if (fileOut.is_open()) {
        for (int i = 0; i < lines; ++i) {
            fileOut << text << std::endl;
        }
        fileOut.close();
    }


}