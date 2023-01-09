#include "TigersPopulation.h"

Statistic_interface* TigersPopulation::create()
{
	return new TigerStatistic();
}
