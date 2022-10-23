#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <vector>
#include "Animal.h"
using namespace std;


class Controller {

private:
	Map gameMap;
	Animal animalArray[100];

public:


	void start();	
	void refresh(); 
	void insertToFile(); 
	void getFromFile();
};



#endif // !CONTROLLER_H