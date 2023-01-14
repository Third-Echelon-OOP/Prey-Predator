#pragma once
#include "Statistic.h"
#include <vector>

using namespace std;

class DeerStatistic : public Statistic
{
	vector<int> deersAmount;
public:

	void printLastDayStatistic() override;
	vector<int>& getAmount() override;
};

