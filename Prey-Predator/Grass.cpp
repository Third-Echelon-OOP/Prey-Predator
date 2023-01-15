#include "Grass.h"
#include <iostream>

Grass::Grass() : MapObject()
{
    Food(BASIC_GRASS_FOOD);
    setType(TYPE_GRASS);
}

Grass::Grass(int detalisation, Coordinates &maxSize, std::vector<MapObject> &otherObj, int foodAmount) {
    Food(foodAmount);
    setType(TYPE_GRASS);
    setObjectRadius(1);
    setID(generateID());
    pointsGenerator(1, maxSize, otherObj);
}

void Grass::pointsGenerator(int numOfPoints, Coordinates &maxSize, std::vector<MapObject> &otherObj) {
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
