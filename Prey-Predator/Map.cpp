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

MapObject& Map::getObjectI(int i) {
    if (i >= object.size())
    {
        return object.front();
    }
    return object[i];
}

std::vector<MapObject> &Map::getObjectArr() {
    return object;
}


void Map::generateGrass(int food) {
    object.push_back(Grass(1, size, object, food));
}

MapObject& Map::findObject(long id) {
    for (int i = 0; i < object.size(); i++)
    {
        if (object[i].getID() == id)
        {
            return object[i];
        }
        
    }
}



