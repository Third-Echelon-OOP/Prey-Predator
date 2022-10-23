#include "Controller.h"
#include <iostream>
using namespace std;


Tiger Controller::getTigerArray()
{
	return *tigerArray;
}

Deer Controller::getDeerArray()
{
	return *deerArray;
}

Map Controller::getMap()
{
	return gameMap;
}

void Controller::setDeerArray(Deer* newDeerArray)
{
	deerArray = newDeerArray;
}

void Controller::setTigerArray(Tiger* newTigerArray)
{
	tigerArray = newTigerArray;
}

void Controller::setMap(Map newMap)
{
	gameMap = newMap;
}


void Controller::start() {

   

}

void Controller::refresh() {


}