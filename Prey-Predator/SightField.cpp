#include "SightField.h"
#include <cmath>

SightField::SightField()
{
    objCoordinate = Coordinates();
    objSightRad = 0;
    otherObj.clear();
    objInSight.clear();
}

SightField::SightField(Coordinates objCoordinate, int objSightRad, std::vector <MapObject> &otherObj)
{
    this->objCoordinate = objCoordinate;
    this->objSightRad = objSightRad;
    this->otherObj = otherObj;
    objInSight.clear();
}

void SightField::setObjCoordinate(Coordinates objCoordinate) {
    this->objCoordinate = objCoordinate;
}

void SightField::setObjSightRad(int objSightRad) {
    this->objSightRad = objSightRad;
}

void  SightField::setOtherObj(std::vector <MapObject> &otherObj) {
    this->otherObj = otherObj;
}

std::vector <MapObject*> *SightField::getObjInSight() {
    return &objInSight;
}

std::vector <MapObject*> *SightField::checkSightField() {
    objInSight.clear();
    float distance;
    for (int i = 0; i < otherObj.size(); i++)
    {
        distance = objCoordinate.distance(otherObj[i].getObjCenter());
        if (distance < (objSightRad + otherObj[i].getObjRad()))
        {
            objInSight.push_back(&otherObj[i]);
        }
    }
    return &objInSight;
}