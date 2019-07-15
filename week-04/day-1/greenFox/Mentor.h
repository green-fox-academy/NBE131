#ifndef DAY_1_MENTOR_H
#define DAY_1_MENTOR_H

#include "Person.h"
#include <string>

enum class Level
{
    JUNIOR,
    INTERMEDIATE,
    SENIOR
};

class Mentor : public Person
{
public:
    Mentor(const std::string &name, int age, Gender gender, Level level);

    Mentor();

    void getGoal() const override;

    void introduce() const override;

    std::string levelToString() const;

private:
    Level _level;


};


#endif //DAY_1_MENTOR_H
