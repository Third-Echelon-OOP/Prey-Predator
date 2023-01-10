#ifndef PREY_PREDATOR_GRASS_H
#define PREY_PREDATOR_GRASS_H

#include "MapObject.h"
#include <vector>

#define BASIC_GRASS_FOOD 5

class Grass: public MapObject
{
private:
    int foodAmount;
public:
    Grass();
    Grass(std::vector<MapObject> &otherObj, Coordinates* mapSize, int foodAmount = BASIC_GRASS_FOOD);
    void pointsGenerator(Coordinates *mapSize, std::vector<MapObject> &otherObj);
   
    bool checkFood();
    bool decFood();
    void incFood();
    //~Grass();
};



#endif //PREY_PREDATOR_GRASS_H