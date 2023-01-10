//
// Created by oleks on 25.10.2022.
//

#ifndef PREY_PREDATOR_MAPOBJECT_H
#define PREY_PREDATOR_MAPOBJECT_H

#include "Coordinates.h"
#include <vector>

#define TYPE_DEFAULT -1;
#define TYPE_GRASS 1


class MapObject {
private:
    int objectType;
    int objectRad;
    Coordinates objectCenter;
    std::vector <Coordinates> pointArr;
public:
    MapObject();
    MapObject(int detalisation, Coordinates* mapSize);

    void setType(int objectType);
    void setObjectRadius(int objectRad);
    void setObjectCenter(Coordinates objectCenter);
    int getPointsNum();
    std::vector <Coordinates> &getPointsArr();
    Coordinates getObjCenter();
    int getObjRad();

    void pointsGenerator(int numOfPoints, Coordinates*mapSize);
    //~MapObject();
};

#endif //PREY_PREDATOR_MAPOBJECT_H
