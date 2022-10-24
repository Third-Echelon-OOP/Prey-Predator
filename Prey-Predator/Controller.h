#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <vector>
#include "Animal.h"
#include "Map.h"

#define SPEED = 1;

using namespace std;


class Controller {

private:
	Map gameMap;

	// change to vector in Lab2
	int lastInsertedIndex = 0;
	Animal *animalArray = new Animal[100];

public:

	Controller(int x, int y);
	void setMap(Map newMap);
	void setAnimalsArray(Animal *newAnimalArray);
	Animal* getAnimalsArray();
	Map getMap();
	void start();	
	void refresh(); 
	void insertToFile(); 
	void getFromFile();
};



#endif // !CONTROLLER_H