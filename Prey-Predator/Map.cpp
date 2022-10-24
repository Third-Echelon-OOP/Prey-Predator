//
// Created by oleks on 23.10.2022.
//

#include "Map.h"
#include <algorithm>
#include <cstdlib>
#include <ctime>

MapCoordinates::MapCoordinates() {
    x = 0;
    y = 0;
}

MapCoordinates::MapCoordinates(int x, int y) {
    this->x = x;
    this->y = y;
}

MapObject::MapObject() {
    objectType = -1;
    numberOfPoints = 0;
    pointArr = nullptr;
}

MapObject::MapObject(int type, int points, MapCoordinates *mapSize) {
    objectType = type;
    //numberOfPoints = points;
    numberOfPoints = 4;
    pointArr = new MapCoordinates [points];
    pointsGenerator(mapSize);
}

void MapObject::pointsGenerator(MapCoordinates *mapSize) {
    MapCoordinates central(rand() % mapSize->x, rand() % mapSize->y);

    pointArr[0] = MapCoordinates(2, 2);
    pointArr[1] = MapCoordinates(2, -2);
    pointArr[2] = MapCoordinates(-2, -2);
    pointArr[3] = MapCoordinates(-2, 2);

    for (int i = 0; i < numberOfPoints; i++) {
        pointArr[i].x += central.x;
        pointArr[i].y += central.y;
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

MapCoordinates Map::getSize() {
    return size;
}

void Map::generateObject1() {
    MapObject(1, 4, &size);
}