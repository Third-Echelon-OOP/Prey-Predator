//
// Created by oleks on 25.10.2022.
//

#include "MapObject.h"
#include <algorithm>
#include <cstdlib>
#include <ctime>


MapObject::MapObject() {
    objectType = -1;
    pointArr.clear();
}

MapObject::MapObject(int detalisation, Coordinates *mapSize) {
    objectType = TYPE_DEFAULT;
    pointArr.clear();
    pointsGenerator(detalisation, mapSize);
}

void MapObject::pointsGenerator(int numOfPoints, Coordinates *mapSize) {
    int indent = 5;
    objectCenter = Coordinates(indent + rand() % (mapSize->getX() - indent),
                        indent + rand() % (mapSize->getY() - indent));

    //rand polygon generation
}

void MapObject::setType(int objectType) {
    this->objectType = objectType;
}

void MapObject::setObjectRadius(int objectRad) {
    this->objectRad = objectRad;
}

void MapObject::setObjectCenter(Coordinates objectCenter) {
    this->objectCenter = objectCenter;
}

int MapObject::getPointsNum() {
    return pointArr.size();
}

std::vector <Coordinates> &MapObject::getPointsArr() {
    return pointArr;
}

Coordinates MapObject::getObjCenter() {
    return objectCenter;
}

int MapObject::getObjRad() {
    return objectRad;
}

//MapObject::~MapObject() {
//    delete pointArr;
//}