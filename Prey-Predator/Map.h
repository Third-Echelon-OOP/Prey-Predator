//
// Created by oleks on 23.10.2022.
//

#ifndef PREY_PREDATOR_MAP_H
#define PREY_PREDATOR_MAP_H


#include "Coordinates.h"
#include "MapObject.h"
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
    MapObject& getObjectI(int i);
    std::vector<MapObject>& getObjectArr();

    void generateGrass(int food);

    MapObject& findObject(long id);

    // void changeObjectFood(long id, int change);


};

#endif //PREY_PREDATOR_MAP_H
