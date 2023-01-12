#ifndef PREY_PREDATOR_DIGHTFIELD_H
#define PREY_PREDATOR_DIGHTFIELD_H

#include "Coordinates.h"
#include "MapObject.h"
#include "Map.h"
#include <vector>

class SightField
{
private:
    Coordinates objCoordinate;
    int objSightRad;
    Map *map;
    std::vector <MapObject*> objInSight;
public:
    SightField();
    SightField(Coordinates objCoordinate, int objSightRad, Map *map);
    
    void setObjCoordinate(Coordinates objCoordinate);
    void setObjSightRad(int objSightRad);

    std::vector <MapObject*> *getObjInSight();

    std::vector <MapObject*> *checkSightField();

    //~SightField();
};



#endif //PREY_PREDATOR_DIGHTFIELD_H