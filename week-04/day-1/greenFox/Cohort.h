#ifndef DAY_1_COHORT_H
#define DAY_1_COHORT_H

#include <string>
#include <vector>
#include "Student.h"
#include "Mentor.h"

class Cohort
{
public:
    Cohort(const std::string &name);

    void addStudent(Student *);

    void addMentor(Mentor *);

    void info();

private:
    std::string _name;
    std::vector<Student *> _students;
    std::vector<Mentor *> _mentors;
};


#endif //DAY_1_COHORT_H
