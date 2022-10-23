#include "Controller.h"
#include <iostream>
using namespace std;


Controller::Controller(int x, int y)
{
	Map map(x, y);
	setMap(map);
}

Animal* Controller::getAnimalsArray()
{
	return animalArray;
}

Map Controller::getMap()
{
	return gameMap;
}

void Controller::setAnimalsArray(Animal* newAnimalArray)
{
	animalArray = newAnimalArray;
}

void Controller::setMap(Map newMap)
{
	gameMap = newMap;
}


void Controller::start() 
{
	int xAnim = rand() % gameMap.getSize().x + 1;
	int yAnim = rand() % gameMap.getSize().y + 1;
	Animal anim(xAnim, yAnim);
	getAnimalsArray()[lastInsertedIndex] = anim;
	lastInsertedIndex++;
}

void Controller::refresh() 
{


}