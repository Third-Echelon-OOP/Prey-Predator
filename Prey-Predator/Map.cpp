//
// Created by oleks on 23.10.2022.
//

#include "Map.h"

Coordinates::Coordinates() {
    x = 0;
    y = 0;
}

Coordinates::Coordinates(int x, int y) {
    this->x = x;
    this->y = y;
}

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
    pointArr = new Coordinates [points];
    pointsGenerator(mapSize);
}

void MapObject::pointsGenerator(Coordinates *mapSize) {
    int indent = 5;
    Coordinates central(indent + rand() % (mapSize->x - indent),
                        indent + rand() % (mapSize->y - indent));

    pointArr[0] = Coordinates(0, 2);
    pointArr[1] = Coordinates(2, 0);
    pointArr[2] = Coordinates(0, -2);
    pointArr[3] = Coordinates(-2, 0);

    for (int i = 0; i < numberOfPoints; i++) {
        pointArr[i] += central;
    }
}

MapObject::~MapObject() {
    delete pointArr;
}

Map::Map() {
    size.x = 0;
    size.y = 0;
    numberOfObjects = 0;
}

Map::Map(int x, int y) {
    size.x = x;
    size.y = y;
    numberOfObjects = 10;
    object = new [numberOfObjects];
    currNum = 0;
}

Map::generateObject1() {
    object[currNum] = MapObject(1, 4, &size);
    currNum++;
    if (currNum >= numberOfObjects)
        currNum = 0;
}