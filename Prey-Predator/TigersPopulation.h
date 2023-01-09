#pragma once
#include "Population_interface.h"
#include "TigerStatistic.h"

class TigersPopulation : public Population_interface
{
public:
	Statistic_interface* create() override;
};

