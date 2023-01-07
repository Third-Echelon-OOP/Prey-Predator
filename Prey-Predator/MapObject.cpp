//
// Created by oleks on 25.10.2022.
//

#include "MapObject.h"
#include <algorithm>
#include <cstdlib>
#include <ctime>


MapObject::MapObject() {
    objectType = -1;
    numberOfPoints = 0;
    pointArr = nullptr;
}

MapObject::MapObject(int type, int points, Coordinates *mapSize) {
    objectType = type;
    //numberOfPoints = points;
    numberOfPoints = 4;
    pointArr = new Coordinates[points];
    pointsGenerator(mapSize);
}

void MapObject::pointsGenerator(Coordinates *mapSize) {
    int indent = 5;
    Coordinates central(indent + rand() % (mapSize->getX() - indent),
                        indent + rand() % (mapSize->getY() - indent));

    //rand polygon generation

    pointArr[0] = Coordinates(0, 2);
    pointArr[1] = Coordinates(2, 0);
    pointArr[2] = Coordinates(0, -2);
    pointArr[3] = Coordinates(-2, 0);

    for (int i = 0; i < numberOfPoints; i++) {
        int newX = pointArr[i].getX(), newY = pointArr[i].getY();
        newX += central.getX();
        newY += central.getY();
        pointArr[i].setX(newX);
        pointArr[i].setY(newY);
    }
}

void MapObject::setType(int objectType) {
    this->objectType = objectType;
}

int MapObject::getPointsNum() {
    return numberOfPoints;
}

Coordinates* MapObject::getPointsArr() {
    return pointArr;
}

//MapObject::~MapObject() {
//    delete pointArr;
//}