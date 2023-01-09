#include "DeersPopulation.h"

Statistic_interface* DeersPopulation::create()
{
	return new DeerStatistic();
}
