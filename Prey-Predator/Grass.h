#ifndef PREY_PREDATOR_GRASS_H
#define PREY_PREDATOR_GRASS_H

#include "MapObject.h"
#include "Food.h"
#include <vector>

#define BASIC_GRASS_FOOD 5

class Grass: public MapObject, public Food
{
public:
    Grass();
    Grass(int detalisation, Coordinates &maxSize, std::vector<MapObject> &otherObj, int foodAmount);
   
    void pointsGenerator(int numOfPoints, Coordinates &maxSize, std::vector<MapObject> &otherObj) override;

    //~Grass();
};



#endif //PREY_PREDATOR_GRASS_H