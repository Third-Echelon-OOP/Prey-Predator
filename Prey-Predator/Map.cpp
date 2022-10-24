//
// Created by oleks on 23.10.2022.
//

#include "Map.h"
#include <algorithm>
#include <cstdlib>
#include <ctime>




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

