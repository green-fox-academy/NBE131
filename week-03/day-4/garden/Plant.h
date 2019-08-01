
#ifndef GARDEN_PLANT_H
#define GARDEN_PLANT_H

#include <string>

enum class Type
{
    FLOWER,
    TREE
};


class Plant
{
public:
    Plant(const std::string &color, Type type, float absorbeance);


    std::string _color;

    const std::string &getColor() const;

    float getWaterLevel() const;

    void setWaterLevel(float waterLevel);

    Type getType() const;

    float getAbsorbeance() const;

protected:
    float _waterLevel;
    Type _type;
    float _absorbeance;


};

#endif //GARDEN_PLANT_H
