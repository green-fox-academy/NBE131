#ifndef TESTPROJECT_MYCLASS_H
#define TESTPROJECT_MYCLASS_H
#include <string>
#include <vector>

class myClass

{
public:
    myClass();

    std::string getApple();
    int sum(std::vector<int>);
    bool isAnagram (const std::string&, const std::string&);
    int fibonacci(unsigned int);


protected:
   // std::vector <int> _inputVector;


};


#endif //TESTPROJECT_MYCLASS_H
