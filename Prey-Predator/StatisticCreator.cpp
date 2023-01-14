#include "StatisticCreator.h"

Statistic * DeerStatisticCreator::create()
{
	return new DeerStatistic();
}

Statistic* TigerStatisticCreator::create()
{
	return new TigerStatistic();
}