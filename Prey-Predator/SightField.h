#ifndef PREY_PREDATOR_DIGHTFIELD_H
#define PREY_PREDATOR_DIGHTFIELD_H

#include "Coordinates.h"
#include "MapObject.h"
#include <vector>

class SightField
{
private:
    Coordinates objCoordinate;
    int objSightRad;
    std::vector <MapObject> otherObj;
    std::vector <MapObject*> objInSight;
public:
    SightField();
    SightField(Coordinates objCoordinate, int objSightRad, std::vector <MapObject> &otherObj);
    
    void setObjCoordinate(Coordinates objCoordinate);
    void setObjSightRad(int objSightRad);
    void setOtherObj(std::vector <MapObject> &otherObj);

    std::vector <MapObject*> &getObjInSight();

    std::vector <MapObject*> &checkSightField();

    //~SightField();
};



#endif //PREY_PREDATOR_DIGHTFIELD_H