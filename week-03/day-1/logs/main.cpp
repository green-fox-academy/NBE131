// Read all data from 'log.txt'.
// Each line represents a log message from a web server
// Write a function that returns an array with the unique IP adresses.
// Write a function that returns the GET / POST request ratio.

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

float gPRatio(const std::string &);

std::vector<std::string> getIPs(const std::string &);


int main()
{

    gPRatio("../log.txt");

    auto answer = getIPs("../log.txt");
    for (int i = 0; i < answer.size(); ++i) {
        std::cout << answer[i];
    }

    return 0;
}


float gPRatio(const std::string &inputFile)
{

    int getCounter = 0;
    int postCounter = 0;

    std::ifstream input(inputFile);

    if (input.is_open()) {

        std::string transaction;

        while (input >> transaction) {

            // std::cout << transaction << std::endl;

            if (transaction == "GET") {
                getCounter++;

            } else if (transaction == "POST") {
                postCounter++;
            }

        }
    } else {

        std::cout << "Can't open file to read." << std::endl;
        exit(2);
    }

    input.close();

    float GPRatio = (float) getCounter / postCounter;

    std::cout << GPRatio;

    return GPRatio;
}


std::vector<std::string> getIPs(const std::string &inputFile)
{
    std::vector<std::string> uniqueIPs;

    std::ifstream input(inputFile);

    if (input.is_open()) {

        // std::string IP;
        std::string line;
        std::string correctedLine;
        std::string correctedLine2;


        char c;
        int spaceCounter = 0;

        while (input.get(c)) {

            std::stringstream correctedInput(correctedLine);

            if (c == ' ' && spaceCounter == 0) {
                while (getline(correctedInput, correctedLine2)) {
                    std::stringstream StringStream(correctedLine2);

                    std::string day;
                    std::string month;
                    std::string date;
                    std::string time;
                    std::string year;
                    std::string IP;
                    std::string transaction;


                    getline(StringStream, day, ' ');
                    getline(StringStream, month, ' ');
                    getline(StringStream, date, ' ');
                    getline(StringStream, time, ' ');
                    getline(StringStream, year, ' ');
                    getline(StringStream, IP, ' ');

                    std::cout << IP << std::endl;

                    getline(StringStream, transaction, ' ');


                    for (int i = 0; i < uniqueIPs.size(); ++i) {


                        if (IP == uniqueIPs[i]) {

                        } else {
                            uniqueIPs.push_back(IP);
                        }
                    }
                }

                spaceCounter++;
                correctedLine += c;
            } else if (c == ' ' && spaceCounter > 0) {
                spaceCounter++;
            } else if (c != ' ' && spaceCounter != 0) {
                spaceCounter = 0;
            }


        }


    } else {

        std::cout << "Can't open file to read." << std::endl;
        exit(2);
    }

    input.close();


    return uniqueIPs;

}