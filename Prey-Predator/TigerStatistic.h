#pragma once

#include "Statistic.h"
#include <vector>

using namespace std;

class TigerStatistic: public Statistic
{
	vector<int> tigersAmount;
public:

	void printLastDayStatistic() override;
	vector<int>& getAmount() override;
};

