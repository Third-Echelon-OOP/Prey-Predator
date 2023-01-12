//
// Created by oleks on 23.10.2022.
//

#include "Map.h"
#include "Grass.h"
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

MapObject* Map::getObjectI(int i) {
    if (i >= object.size())
    {
        return {};
    }
    return &object[i];
}

std::vector<MapObject> &Map::getObjectArr() {
    return object;
}


void Map::generateObject1() {
    object.push_back(MapObject(4, this));
}

void Map::generateGrass(int food) {
    object.push_back(Grass(this, food));
}


//Map::~Map() {
//    delete object;
//}

