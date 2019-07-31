#include "Sponsor.h"
#include <iostream>

Sponsor::Sponsor(const std::string &name, int age, Gender gender, const std::string &company) : Person(name, age,
                                                                                                       gender),
                                                                                                _company(company)
{
    _hiredStudents = 0;
}

Sponsor::Sponsor()
{
    _company = "Google";
    _hiredStudents = 0;

}

void Sponsor::introduce() const
{
    std::cout << "Hi, I'm " << _name << ", a(n) " << _age << " years old " << genderToString()
              << ", who represents " << _company
              << ", and hired " << _hiredStudents << " students so far." << std::endl;
}

void Sponsor::getGoal() const
{
    std::cout << "My goal is: to hire brilliant junior software developers." << std::endl;
}

int Sponsor::hire()
{
    _hiredStudents += 1;
}




