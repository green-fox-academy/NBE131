#include "Person.h"
#include <iostream>

Person::Person(const std::string &name, int age, Gender gender) : _name(name), _age(age), _gender(gender)
{

}

Person::Person()
{
    _name = "Jane Doe";
    _age = 30;
    _gender = Gender::FEMALE;

}

void Person::introduce() const
{
    std::cout << "Hi, I'm " << _name << ", a(n) " << _age << " years old " << Person::genderToString() << "." << std::endl;

}

void Person::getGoal() const
{
    std::cout << "My goal is: to leave for a moment." << std::endl;
}

std::string Person::genderToString() const
{

    if (_gender == Gender::FEMALE) {
        return "female";
    } else if (_gender == Gender::MALE) {
        return "male";
    } else {
        return "";
    }
}
