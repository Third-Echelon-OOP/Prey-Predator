//
// Created by oleks on 23.10.2022.
//

#include "Map.h"
#include <algorithm>
#include <cstdlib>
#include <ctime>



Coordinates::Coordinates operator +(Coordinates const &arg) {
    Coordinates res;
    res.x = x + arg.x;
    res.y = y + arg.y;
    return res;
}

Coordinates::Coordinates operator -(Coordinates const &arg) {
    Coordinates res;
    res.x = x - arg.x;
    res.y = y - arg.y;
    return res;
}

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

//MapObject::~MapObject() {
//    delete pointArr;
//}

Map::Map() {
    numberOfObjects = 0;
}

Map::Map(int x, int y) {
    size = Coordinates(x, y);
    numberOfObjects = 100;
    object = new MapObject[numberOfObjects];

    currNum = 0;
}

Coordinates Map::getSize() {
    return size;
}


void Map::generateObject1() {
    object[currNum] = MapObject(1, 4, &size);
    currNum++;
    if (currNum >= numberOfObjects)
        currNum = 0;
}


//Map::~Map() {
//    delete object;
//}

