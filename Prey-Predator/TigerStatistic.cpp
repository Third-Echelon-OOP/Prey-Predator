#include "TigerStatistic.h"
#include <iostream>

using namespace std;

void TigerStatistic::printLastDayStatistic()
{
	cout << "Tigers population: " << tigersAmount.back() << endl;
}

vector<int>& TigerStatistic::getAmount()
{
	return tigersAmount;
}