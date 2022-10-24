//
// Created by oleks on 23.10.2022.
//

#ifndef PREY_PREDATOR_MAP_H
#define PREY_PREDATOR_MAP_H


#include "Coordinates.h"


class MapObject {
private:
    int numberOfPoints;
    int objectType;
    Coordinates *pointArr;
public:
    MapObject();
    MapObject(int type, int points, Coordinates* mapSize);
    void pointsGenerator(Coordinates*mapSize);
    //~MapObject();
};

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
    void generateObject1();

    //~Map();

};

#endif //PREY_PREDATOR_MAP_H
