#pragma once
#include <vector>

using namespace std;

class Statistic {

public:
	virtual void printLastDayStatistic() = 0;
	virtual vector<int>& getAmount() = 0;
};
