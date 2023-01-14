#pragma once
#include "Statistic.h"
#include "StatisticCreator.h"
#include "DeerStatistic.h"
#include "TigerStatistic.h"

class StatisticCreator{
public:
	virtual Statistic* create() = 0;
};

class TigerStatisticCreator : public StatisticCreator
{
public:
	Statistic* create() override;
};

class DeerStatisticCreator : public StatisticCreator
{
public:
	Statistic* create() override;
};
