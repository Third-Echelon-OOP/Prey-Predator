#ifndef PREY_PREDATOR_GRASS_H
#define PREY_PREDATOR_GRASS_H

#include "MapObject.h"
#include "Map.h"
#include <vector>

#define BASIC_GRASS_FOOD 5

class Grass: public MapObject
{
private:
    int foodAmount;

    void pointsGenerator(Map *map);
public:
    Grass();
    Grass(Map *map, int foodAmount = BASIC_GRASS_FOOD);
   
    bool checkFood();
    bool decFood();
    void incFood();
    //~Grass();
};



#endif //PREY_PREDATOR_GRASS_H