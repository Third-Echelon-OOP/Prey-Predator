#include "Grass.h"
#include <iostream>

Grass::Grass() : MapObject()
{
    foodAmount = BASIC_GRASS_FOOD;
    setType(TYPE_GRASS);
}

Grass::Grass(Coordinates &maxSize, std::vector<MapObject> &otherObj, int foodAmount) {
    this->foodAmount = foodAmount;
    setType(TYPE_GRASS);
    setObjectRadius(1);
    setID(generateID());
    pointsGenerator(maxSize, otherObj);
}

void Grass::pointsGenerator(Coordinates &maxSize, std::vector<MapObject> &otherObj) {
   Coordinates objectCenter;
   float distance;
   bool flag = true;
   while (flag)
   {
       flag = false;
       objectCenter.setX(rand() % maxSize.getX());
       objectCenter.setY(rand() % maxSize.getY());
       for (int i = 0; i < otherObj.size(); i++)
       {
            distance = getObjCenter().distance(otherObj[i].getObjCenter());
            if (distance < (getObjRad() + otherObj[i].getObjRad()))
            {
                flag = true;
                break;
            }
       }
   }
   setObjectCenter(objectCenter);
   addPointToArray(objectCenter);
}

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


