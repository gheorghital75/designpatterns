#include "abstract_factory.h"

CivilCarParts* CivilCarsPartsFactory::createVehicleParts()
{
	return new CivilCarParts;
}

MotorcycleParts* MotorcyclePartsFactory::createVehicleParts()
{
	return new MotorcycleParts;
}
