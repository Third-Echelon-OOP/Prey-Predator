//
// Created by oleks on 25.10.2022.
//
#include "MapObject.h"
#include <algorithm>
#include <cstdlib>
#include <ctime>

long MapObject::generateID() {
    long id = 0;
    for (int i = 0; i < 8; i++)
    {
        id += rand() % 10;
    }
    return id;
}

MapObject::MapObject() {
    objectType = -1;
    objectID = 0;
    polygon = PolygonWithCenter();
}

MapObject::MapObject(int detalisation, Coordinates &maxSize, std::vector<MapObject> &otherObj) {
    objectType = TYPE_DEFAULT;
    objectID = generateID();
}

void MapObject::setID(long objectID) {
    this->objectID = objectID;
}

void MapObject::setType(int objectType) {
    this->objectType = objectType;
}

void MapObject::setObjectRadius(int objectRadius) {
    polygon.setPolygonRadius(objectRadius);
}

void MapObject::setObjectCenter(Coordinates objectCenter) {
    polygon.setPolygonCenter(objectCenter);
}

int MapObject::getPointsNum() {
    return polygon.getPointArray().size();
}

std::vector <Coordinates> &MapObject::getPointsArr() {
    return polygon.getPointArray();
}

void MapObject::addPointToArray(Coordinates newPoint) {
    polygon.addPoint(newPoint);
}

Coordinates MapObject::getObjCenter() {
    return polygon.getPolygonCenter();
}

int MapObject::getObjType() {
    return objectType;
}

int MapObject::getObjRad() {
    return polygon.getPolygonRadius();
}

long MapObject::getID() {
    return objectID;
}