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
    Coordinates central(rand() % mapSize->x, rand() % mapSize->y);

    pointArr[0] = Coordinates(2, 2);
    pointArr[1] = Coordinates(2, -2);
    pointArr[2] = Coordinates(-2, -2);
    pointArr[3] = Coordinates(-2, 2);

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
}

Map::Map(int x, int y) {
    size.x = x;
    size.y = y;
}

Map::generateObject1() {
    MapObject(1, 4, &size);
}