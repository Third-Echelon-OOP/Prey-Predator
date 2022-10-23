#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <vector>
#include "Deer.h"
#include "Tiger.h"

#define SPEED = 1;

using namespace std;


class Controller {

private:
	Map gameMap;
	int sizeOfArrays = 100;
	Deer* deerArray = new Deer[sizeOfArrays];
	Tiger *tigerArray = new Tiger[sizeOfArrays];

public:

	void setMap(Map newMap);
	void setDeerArray(Deer newDeerArray);
	void setTigerArray(Deer newTigerArray);
	Deer getDeerArray();
	Map  getMap();
	Tiger getTigerArray();

	void start();	
	void refresh(); 
	void insertToFile(); 
	void getFromFile();
};



#endif // !CONTROLLER_H