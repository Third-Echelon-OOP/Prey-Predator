//
// Created by oleks on 25.10.2022.
//

#ifndef PREY_PREDATOR_MAPOBJECT_H
#define PREY_PREDATOR_MAPOBJECT_H

#include "Coordinates.h"

class MapObject {
private:
    int numberOfPoints;
    int objectType;
    Coordinates *pointArr;
public:
    MapObject();
    MapObject(int type, int points, Coordinates* mapSize);

    void setType(int objectType);
    int getPointsNum();
    Coordinates* getPointsArr();

    void pointsGenerator(Coordinates*mapSize);
    //~MapObject();
};

#endif //PREY_PREDATOR_MAPOBJECT_H
