#include "Polygon.h"

Polygon::Polygon()
{
}

void Polygon::addPoint(Coordinates point) {
    pointArr.push_back(point);
}

std::vector <Coordinates> &Polygon::getPointArray() {
    return pointArr;
}

// Polygon::~Polygon()
// {
// }

PolygonWithCenter::PolygonWithCenter() {
    polygonCenter = Coordinates();
    radius = 0;
}

PolygonWithCenter::PolygonWithCenter(Coordinates polygonCenter, int radius) {
    this->polygonCenter = polygonCenter;
    this->radius = radius;
}

Coordinates &PolygonWithCenter::getPolygonCenter() {
    return polygonCenter;
}

int &PolygonWithCenter::getPolygonRadius() {
    return radius;
}

void PolygonWithCenter::setPolygonCenter(Coordinates polygonCenter) {
    this->polygonCenter = polygonCenter;
}

void PolygonWithCenter::setPolygonRadius(int radius) {
    this->radius = radius;
}