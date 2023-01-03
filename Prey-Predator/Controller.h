#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <vector>
#include "Animal.h"
#include "Tiger.h"
#include "Deer.h"
#include "Map.h"

#define SPEED = 1;

using namespace std;


class Controller {

private:
	Map gameMap;
	vector<Tiger> TigersArray;
	vector<Deer> DeersArray;
	
	int deerBirthCount;
	int tigerBirthCount;
public:

	Controller(int x, int y);
	vector<Tiger> getTigersArray();
	vector<Deer> getDeersArray();
	Map getMap();
	void start();	
	void refresh(); 

	void saveToFile(); 
	void getFromFile();
};



#endif // !CONTROLLER_H