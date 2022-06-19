#pragma once
#include "vehicle.h"

class Factory
{
public:
	static Vehicle* createInstance(int i);
	static int destroyInstance(Vehicle*);
};
