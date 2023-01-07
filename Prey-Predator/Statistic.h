#ifndef STATISTIC_H
#define STATISTIC_H

#include <vector>
#include "Animal.h"
#include "Tiger.h"
#include "Deer.h"

using namespace std;

class Statistic {
private:

	vector<Tiger> PredatorsAmount;
	vector<Deer> PreysAmount;


public:

	vector<Tiger> getPredatorsAmount();
	vector<Deer> getPreysAmount();
	void printStatistic();



};
#endif // !STATISTIC_H
