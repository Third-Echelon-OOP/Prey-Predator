#include "DeerStatistic.h"
#include <iostream>

using namespace std;

void DeerStatistic::printLastDayStatistic()
{
	cout << "Deers population: " << deersAmount.back() << endl;
}

vector<int>& DeerStatistic::getAmount()
{
	return deersAmount;
}