#include "SightField.h"
#include <cmath>

SightField::SightField()
{
    objCoordinate = Coordinates();
    objSightRad = 0;
    map = nullptr;
    objInSight.clear();
}

SightField::SightField(Coordinates objCoordinate, int objSightRad, Map *map)
{
    this->objCoordinate = objCoordinate;
    this->objSightRad = objSightRad;
    this->map = map;
    objInSight.clear();
}

void SightField::setObjCoordinate(Coordinates objCoordinate) {
    this->objCoordinate = objCoordinate;
}

void SightField::setObjSightRad(int objSightRad) {
    this->objSightRad = objSightRad;
}

std::vector <MapObject*> *SightField::getObjInSight() {
    return &objInSight;
}

std::vector <MapObject*> *SightField::checkSightField() {
    if (map == nullptr) {
        return nullptr;
    }
    objInSight.clear();
    float distance;
    for (int i = 0; i < map->getObjectNum(); i++)
    {
        distance = objCoordinate.distance(map->getObjectI(i)->getObjCenter());
        if (distance < (objSightRad + map->getObjectI(i)->getObjRad()))
        {
            objInSight.push_back(map->getObjectI(i));
        }
    }
    return &objInSight;
}