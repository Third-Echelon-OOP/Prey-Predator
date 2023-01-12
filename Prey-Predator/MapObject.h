//
// Created by oleks on 25.10.2022.
//

#ifndef PREY_PREDATOR_MAPOBJECT_H
#define PREY_PREDATOR_MAPOBJECT_H

#include "Coordinates.h"
#include <vector>

#define TYPE_DEFAULT -1;
#define TYPE_GRASS 1

class Map;

class MapObject {
private:
    int objectType;
    int objectID;
    int objectRad;
    Coordinates objectCenter;
    std::vector <Coordinates> pointArr;

    void pointsGenerator(int numOfPoints, Coordinates mapSize);
public:
    MapObject();
    MapObject(int detalisation, Map *map);

    void setType(int objectType);
    void setObjectRadius(int objectRad);
    void setObjectCenter(Coordinates objectCenter);
    void addPointToArray(Coordinates newPoint);

    int getPointsNum();
    std::vector <Coordinates> *getPointsArr();
    Coordinates getObjCenter();
    int getObjRad();
    long getID();

    void setID(long objectID);
    long generateID();
    //~MapObject();
};

#endif //PREY_PREDATOR_MAPOBJECT_H
