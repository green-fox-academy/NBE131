#ifndef DAY_1_STUDENT_H
#define DAY_1_STUDENT_H

#include <string>
#include "Person.h"

class Student : public Person
{
public:
    Student(const std::string &name, int age, Gender gender, const std::string &previousOrganization);

    Student();

    void getGoal() const override;

    void introduce() const override;

    void skipDays(int);


private:
    std::string _previousOrganization;
    int _skippedDays;

};


#endif //DAY_1_STUDENT_H
