#include "Student.h"
#include <iostream>

Student::Student(const std::string &name, int age, Gender gender, const std::string &previousOrganization) : Person(
        name, age, gender), _previousOrganization(previousOrganization)
{
    _skippedDays = 0;
}

Student::Student()
{
    _previousOrganization = "The school of life";
    _skippedDays = 0;
}


void Student::introduce() const
{
    std::cout << "Hi, I'm " << _name << ", a(n) " << _age << " years old " << genderToString() << " from "
              << _previousOrganization << ", who skipped " << _skippedDays << " days from the course already."
              << std::endl;

}

void Student::getGoal() const
{

    std::cout << " My goal is: to be a junior software developer." << std::endl;
}


void Student::skipDays(int numberOfDays)
{
    _skippedDays = _skippedDays + numberOfDays;

}




