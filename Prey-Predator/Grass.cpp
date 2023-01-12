#include "Grass.h"
#include "SightField.h"
#include <iostream>

Grass::Grass() : MapObject()
{
    foodAmount = BASIC_GRASS_FOOD;
    setType(TYPE_GRASS);
}

Grass::Grass(Map *map, int foodAmount) {
    this->foodAmount = foodAmount;
    setType(TYPE_GRASS);
    setObjectRadius(0);
    setID(generateID());
    /*pointsGenerator(map);*/
}

//void Grass::pointsGenerator(Map *map) {
//    Coordinates objectCenter(rand() % map->getSize().getX(), rand() % map->getSize().getY());
//    SightField sight(objectCenter, getObjRad(), map);
//    while (true)
//    {
//        sight.setObjCoordinate(objectCenter);
//        if (sight.checkSightField()->size() == 0)
//        {
//            break;
//        }
//        objectCenter.setX(rand() % map->getSize().getX());
//        objectCenter.setY(rand() % map->getSize().getY());
//    }
//    setObjectCenter(objectCenter);
//    addPointToArray(objectCenter);
//}

bool Grass::checkFood() {
    if (foodAmount == 0)
    {
        return false;
    }
    return true;
}

void Grass::changeFood(int change) {
    if (foodAmount + change < 0){
        foodAmount = 0;
    }
    else {
        foodAmount += change;
    }
}


