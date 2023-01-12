//
// Created by oleks on 25.10.2022.
//
#include "Map.h"
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
    objectRad = 0;
    pointArr.clear();
}

MapObject::MapObject(int detalisation, Coordinates mapSize) {
    objectType = TYPE_DEFAULT;
    objectID = generateID();
    objectRad = 0;
    pointArr.clear();
    pointsGenerator(detalisation, mapSize);
}

void MapObject::pointsGenerator(int numOfPoints, Coordinates mapSize) {
    int indent = 5;
    objectCenter = Coordinates(indent + rand() % (mapSize.getX() - indent),
                        indent + rand() % (mapSize.getY() - indent));

    //rand polygon generation
}

void MapObject::setID(long objectID) {
    this->objectID = objectID;
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

std::vector <Coordinates> *MapObject::getPointsArr() {
    return &pointArr;
}

void MapObject::addPointToArray(Coordinates newPoint) {
    pointArr.push_back(newPoint);
}

Coordinates MapObject::getObjCenter() {
    return objectCenter;
}

int MapObject::getObjType() {
    return objectType;
}

int MapObject::getObjRad() {
    return objectRad;
}

long MapObject::getID() {
    return objectID;
}

//MapObject::~MapObject() {
//    delete pointArr;
//}