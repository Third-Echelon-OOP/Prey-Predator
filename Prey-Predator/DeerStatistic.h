#pragma once
#include "Statistic_interface.h"
#include <vector>

using namespace std;

class DeerStatistic : public Statistic_interface
{
	vector<int> deersAmount;
public:

	void printLastDayStatistic() override;
	vector<int>& getAmount() override;
};

