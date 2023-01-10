//
// Created by oleks on 23.10.2022.
//

#ifndef PREY_PREDATOR_MAP_H
#define PREY_PREDATOR_MAP_H


#include "Coordinates.h"
#include "MapObject.h"
#include "Grass.h"

#include <vector>


class Map {
private:
    Coordinates size;
    std::vector <MapObject> object;
public:
    Map();
    Map(int x, int y);

    Coordinates getSize();
    int getObjectNum();
    std::vector<MapObject>& getObjectArr();

    void generateObject1();
    void generateGrass(int food);

    //~Map();

};

#endif //PREY_PREDATOR_MAP_H
