#include "Grass.h"
#include "SightField.h"
#include <iostream>

Grass::Grass() : MapObject()
{
    foodAmount = BASIC_GRASS_FOOD;
    setType(TYPE_GRASS);
}

Grass::Grass(std::vector<MapObject> &otherObj, Coordinates* mapSize, int foodAmount = BASIC_GRASS_FOOD) {
    this->foodAmount = foodAmount;
    setType(TYPE_GRASS);
    setObjectRadius(0);
    pointsGenerator(mapSize, otherObj);
}

void Grass::pointsGenerator(Coordinates *mapSize, std::vector<MapObject> &otherObj) {
    Coordinates objectCenter(rand() % mapSize->getX(), rand() % mapSize->getY());
    SightField sight(objectCenter, getObjRad(), otherObj);
    while (true)
    {
        sight.setObjCoordinate(objectCenter);
        if (sight.checkSightField().size() == 0)
        {
            break;
        }
        objectCenter.setX(rand() % mapSize->getX());
        objectCenter.setY(rand() % mapSize->getY());
    }
    setObjectCenter(objectCenter);
    getPointsArr().push_back(objectCenter);
}

bool Grass::checkFood() {
    if (foodAmount == 0)
    {
        return false;
    }
    return true;
}

bool Grass::decFood() {
    if (foodAmount == 0)
    {
        return false;
    }
    foodAmount--;
    return true;
}

void Grass::incFood() {
    foodAmount++;
}


