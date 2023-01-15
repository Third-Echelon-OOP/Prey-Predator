//
// Created by oleks on 25.10.2022.
//

#ifndef PREY_PREDATOR_MAPOBJECT_H
#define PREY_PREDATOR_MAPOBJECT_H

#include "Coordinates.h"
#include "Polygon.h"
#include <vector>

#define TYPE_DEFAULT -1
#define TYPE_GRASS 1

class MapObject {
private:
    int objectType;
    int objectID;
    //int objectRad;
    //Coordinates objectCenter;
    //std::vector <Coordinates> pointArr;
    PolygonWithCenter polygon;

public:
    MapObject();
    MapObject(int detalisation, Coordinates &maxSize, std::vector<MapObject> &otherObj);

    void setType(int objectType);
    void setObjectRadius(int objectRadius);
    void setObjectCenter(Coordinates objectCenter);
    void addPointToArray(Coordinates newPoint);

    int getPointsNum();
    std::vector <Coordinates> &getPointsArr();
    Coordinates getObjCenter();
    int getObjType();
    int getObjRad();
    long getID();

    virtual void pointsGenerator(int numOfPoints, Coordinates &maxSize, std::vector<MapObject> &otherObj);

    void setID(long objectID);
    long generateID();
    //~MapObject();
};

#endif //PREY_PREDATOR_MAPOBJECT_H
