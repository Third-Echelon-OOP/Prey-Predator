#pragma once

#include "Statistic_interface.h"
#include <vector>

using namespace std;

class TigerStatistic: public Statistic_interface
{
	vector<int> tigersAmount;
public:

	void printLastDayStatistic() override;
	vector<int>& getAmount() override;
};

