#pragma once
#include "Statistic_interface.h"

class Population_interface 
{
public:
	virtual Statistic_interface* create() = 0;
};
