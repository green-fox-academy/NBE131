#include "Mentor.h"
#include <iostream>

Mentor::Mentor(const std::string &name, int age, Gender gender, Level level) : Person(name, age, gender), _level(level)
{

}

Mentor::Mentor()
{

    _level = Level::INTERMEDIATE;

}


void Mentor::getGoal() const
{
    std::cout << "My goal is: educate brilliant junior software developers." << std::endl;
}

void Mentor::introduce() const
{

    std::cout << "Hi, I'm " << _name << ", a(n) " << _age << " years old " << genderToString() << ", "
              << Mentor::levelToString() << " mentor." << std::endl;
}

std::string Mentor::levelToString() const
{
    switch (_level) {
        case Level::JUNIOR:
            return "junior";

        case Level::INTERMEDIATE:
            return "intermediate";

        case Level::SENIOR:
            return "senior";

    }

}




