#include "Garden.h"
#include "Tree.h"
#include <vector>
#include <iostream>

Garden::Garden() : _plants()
{

}


void Garden::watering(int ibc)
{
    std::cout << "Watering with " << ibc << std::endl;

    int numberOfPlantsToBeWatered = 0;

    for (int i = 0; i < _plants.size(); ++i) {

        if (((_plants[i]->getWaterLevel() < 10) && (_plants[i]->getType() == Type::TREE)) ||
            ((_plants[i]->getWaterLevel() < 5) && (_plants[i]->getType() == Type::FLOWER))) {

            numberOfPlantsToBeWatered += 1;
        }

    }

    int waterQuote = ibc / numberOfPlantsToBeWatered;

    for (int i = 0; i < _plants.size(); ++i) {

        if ((_plants[i]->getWaterLevel() < 10 && _plants[i]->getType() == Type::TREE) ||
            (_plants[i]->getWaterLevel() < 5 && _plants[i]->getType() == Type::FLOWER)) {

            _plants[i]->setWaterLevel(_plants[i]->getWaterLevel() + (waterQuote * _plants[i]->getAbsorbeance()));
        }

    }

}


void Garden::addPlant(Plant *plant)
{
    _plants.push_back(plant);
}


void Garden::status()
{
    for (int i = 0; i < _plants.size(); ++i) {

        std::cout << "The " << _plants[i]->getColor();

        if (_plants[i]->getType() == Type::TREE){

            std::cout << " tree ";

        } else if (_plants[i]->getType() == Type::FLOWER){

            std::cout << " flower ";
        }


        if (((_plants[i]->getWaterLevel() < 10) && (_plants[i]->getType() == Type::TREE)) ||
            ((_plants[i]->getWaterLevel() < 5) && (_plants[i]->getType() == Type::FLOWER))) {

            std::cout << " needs water." << std::endl;
        } else {
            std::cout << " doesn't need water." << std::endl;
        }

    }
}