//
// Created by oleks on 23.10.2022.
//

#include "Map.h"
#include <algorithm>
#include <cstdlib>
#include <ctime>




Map::Map() {
    size = Coordinates();
    object.clear();
}

Map::Map(int x, int y) {
    size = Coordinates(x, y);
    object.clear();
}

Coordinates Map::getSize() {
    return size;
}

int Map::getObjectNum() {
    return object.size();
}

std::vector<MapObject> &Map::getObjectArr() {
    return object;
}


void Map::generateObject1() {
    object.push_back(MapObject(4, &size));
}

void Map::generateGrass(int food) {
    object.push_back(Grass(object, &size, food));
}


//Map::~Map() {
//    delete object;
//}

