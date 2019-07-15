#ifndef DAY_1_SPONSOR_H
#define DAY_1_SPONSOR_H

#include <string>
#include "Person.h"

class Sponsor : public Person
{
public:
    Sponsor(const std::string &name, int age, Gender gender, const std::string &company);

    Sponsor();

    void introduce() const override;

    void getGoal() const override;

    int hire();


private:
    std::string _company;
    int _hiredStudents;


};


#endif //DAY_1_SPONSOR_H
