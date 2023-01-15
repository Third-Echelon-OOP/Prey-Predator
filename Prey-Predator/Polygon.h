#ifndef PREY_POLYGON_H
#define PREY_POLYGON_H

#include <vector>
#include "Coordinates.h"

class Polygon
{
private:
    std::vector <Coordinates> pointArr;
public:
    Polygon();

    void addPoint(Coordinates point);

    std::vector <Coordinates> &getPointArray();

    //~Polygon();
};

class PolygonWithCenter: public Polygon {
private:
    Coordinates polygonCenter;
    int radius;
public:
    PolygonWithCenter();
    PolygonWithCenter(Coordinates polygonCenter, int radius);

    Coordinates &getPolygonCenter();
    int &getPolygonRadius();

    void setPolygonCenter(Coordinates polygonCenter);
    void setPolygonRadius(int radius);
};




#endif //PREY_POLYGON_H