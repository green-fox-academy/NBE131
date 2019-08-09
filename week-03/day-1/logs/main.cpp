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
#include <algorithm>

float gPRatio(const std::string &);

std::vector<std::string> getIPs(const std::string &);


int main()
{
    std::cout << "GET/POST - ratio: " <<
              gPRatio("../log.txt") << std::endl;

    std::cout << "Unique IPs:" << std::endl;

    auto answer = getIPs("../log.txt");
    for (int i = 0; i < answer.size(); ++i) {
        std::cout << answer[i] << std::endl;
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

    float getPostRatio = (float) getCounter / postCounter;

   // std::cout << getPostRatio;

    return getPostRatio;
}


std::vector<std::string> getIPs(const std::string &inputFile)
{
    std::vector<std::string> uniqueIPs;

    std::ifstream input(inputFile);

    if (input.is_open()) {

        std::string line;

        while (getline(input, line)) {


            std::stringstream stringStream(line);

            std::string day;
            stringStream >> day;
            std::string month;
            stringStream >> month;
            std::string date;
            stringStream >> date;
            std::string time;
            stringStream >> time;
            std::string year;
            stringStream >> year;
            std::string IP;
            stringStream >> IP;
            std::string transaction;
            stringStream >> transaction;

            uniqueIPs.push_back(IP);

            std::sort(uniqueIPs.begin(), uniqueIPs.end());

            for (int i = 1; i <= uniqueIPs.size(); ++i) {
                if (uniqueIPs[i] == uniqueIPs[i - 1]) {
                    uniqueIPs.erase(uniqueIPs.begin() + i);
                }
            }


        }

    } else {

        std::cout << "Can't open file to read." << std::endl;
        exit(2);
    }

    input.close();


    return uniqueIPs;

}