#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <vector>
#include "Animal.h"
#include "Tiger.h"
#include "Deer.h"
#include "Map.h"
#include "TIme_of_year.h"
#include "Population_interface.h"
#include "Statistic_interface.h"
#include "TigersPopulation.h"
#include "DeersPopulation.h"

#define SPEED = 1;

using namespace std;


class Controller {

private:
	Map gameMap;
	vector<Tiger> TigersArray;
	vector<Deer> DeersArray;
	
	Statistic_interface* TStatistic;
	Statistic_interface* DStatistic;
	TIme_of_year currTime;

	void setMap(Map newMap);
	void setStatistics();

public:

	Controller(int x, int y);
	vector<Tiger>& getTigersArray();
	vector<Deer>& getDeersArray();
	Map getMap();
	void start();	
	void refresh(); 
};



#endif // !CONTROLLER_H