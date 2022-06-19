#pragma once

#include"vehicle_parts.h"

class AbstractPartsFactory
{
public:
	AbstractPartsFactory(){}
	virtual ~AbstractPartsFactory(){}

	virtual VehicleParts* createVehicleParts() = 0;

};


class CivilCarsPartsFactory : public AbstractPartsFactory
{
public:
	CivilCarsPartsFactory() {}
	virtual ~CivilCarsPartsFactory(){}

	virtual CivilCarParts* createVehicleParts();
};


class MotorcyclePartsFactory : public AbstractPartsFactory
{
public:
	MotorcyclePartsFactory() {};
	virtual ~MotorcyclePartsFactory() {}

	virtual MotorcycleParts* createVehicleParts();
};