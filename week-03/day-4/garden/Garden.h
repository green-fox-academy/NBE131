#ifndef GARDEN_GARDEN_H
#define GARDEN_GARDEN_H

#include <vector>
#include "Plant.h"

class Garden
{
public:

    std::vector<Plant *> _plants;

    Garden();

    void addPlant(Plant *);

    void watering(int);

    void status();

};


#endif //GARDEN_GARDEN_H
