//
// Created by oleks on 23.10.2022.
//

#ifndef PREY_PREDATOR_MAP_H
#define PREY_PREDATOR_MAP_H

struct MapCoordinates {
    int x;
    int y;
    MapCoordinates();
    MapCoordinates(int x, int y);
};

class MapObject {
private:
    int numberOfPoints;
    int objectType;
    MapCoordinates*pointArr;
public:
    MapObject();
    MapObject(int type, int points, MapCoordinates*mapSize);
    void pointsGenerator(MapCoordinates *mapSize);
    ~MapObject();
};

class Map {
private:
    MapCoordinates size;
    MapObject object[100];
public:
    Map();
    Map(int x, int y);
    MapCoordinates getSize();
    void generateObject1();
};

#endif //PREY_PREDATOR_MAP_H
