#ifndef PREY_PREDATOR_GRASS_H
#define PREY_PREDATOR_GRASS_H

#include "MapObject.h"
#include <vector>

#define BASIC_GRASS_FOOD 5

class Grass: public MapObject
{
private:
    int foodAmount;

    void pointsGenerator(Coordinates &maxSize, std::vector<MapObject> &otherObj);
public:
    Grass();
    Grass(Coordinates &maxSize, std::vector<MapObject> &otherObj, int foodAmount = BASIC_GRASS_FOOD);
   
    bool checkFood();
    void changeFood(int change);
    //~Grass();
};



#endif //PREY_PREDATOR_GRASS_H