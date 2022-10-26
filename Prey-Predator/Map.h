//
// Created by oleks on 23.10.2022.
//

#ifndef PREY_PREDATOR_MAP_H
#define PREY_PREDATOR_MAP_H


#include "Coordinates.h"
#include "MapObject.h"


class Map {
private:
    int numberOfObjects;
    Coordinates size;
    MapObject *object;
    int currNum;

public:
    Map();
    Map(int x, int y);

    Coordinates getSize();
    int getObjectNum();
    MapObject* getObjectArr();

    void generateObject1();

    //~Map();

};

#endif //PREY_PREDATOR_MAP_H
