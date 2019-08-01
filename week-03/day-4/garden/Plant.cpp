#include "Plant.h"


Plant::Plant(const std::string &color, Type type, float absorbeance) : _color(color), _type(type), _absorbeance(absorbeance)
{
    _waterLevel =0.0;
}


float Plant::getWaterLevel() const
{
    return _waterLevel;
}


void Plant::setWaterLevel(float waterLevel)
{
    _waterLevel = waterLevel;
}


Type Plant::getType() const
{
    return _type;
}

float Plant::getAbsorbeance() const
{
    return _absorbeance;
}

const std::string &Plant::getColor() const
{
    return _color;
}
