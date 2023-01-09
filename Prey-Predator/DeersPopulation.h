#pragma once
#include "Population_interface.h"
#include "DeerStatistic.h"

class DeersPopulation : public Population_interface
{
public:
	Statistic_interface* create() override;
};

