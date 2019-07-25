#ifndef TESTPROJECT_MYFUNCTIONSTOTEST_H
#define TESTPROJECT_MYFUNCTIONSTOTEST_H
#include <string>
#include <vector>

class myFunctionsToTest

{
public:
    myFunctionsToTest();

    std::string getApple();
    int sum(std::vector<int>);
    bool isAnagram (const std::string&, const std::string&);
    int fibonacci(unsigned int);


protected:
   // std::vector <int> _inputVector;


};


#endif //TESTPROJECT_MYFUNCTIONSTOTEST_H
