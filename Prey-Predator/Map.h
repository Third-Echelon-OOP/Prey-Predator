//
// Created by oleks on 23.10.2022.
//

#ifndef PREY_PREDATOR_MAP_H
#define PREY_PREDATOR_MAP_H

struct Coordinates {
    int x;
    int y;
    Coordinates();
    Coordinates(int x, int y);
};

class MapObject {
private:
    int numberOfPoints;
    int objectType;
    Coordinates *pointArr;
public:
    MapObject();
    MapObject(int type, int points, Coordinates *mapSize);
    void pointsGenerator(Coordinates *mapSize);
    ~MapObject();
};

class Map {
private:
    Coordinates size;
    MapObject object[100];
public:
    Map();
    Map(int x, int y);
    Coordinates getSize();
    void generateObject1();
};

#endif //PREY_PREDATOR_MAP_H
