#pragma once

class VehicleParts
{
public:
	VehicleParts(){}
	virtual ~VehicleParts(){}

	virtual void wheels() = 0;
	virtual void engine() = 0;
};

class CivilCarParts :public VehicleParts
{
	CivilCarParts() {}
	virtual ~CivilCarParts() {}

	virtual void wheels() = 0;
	virtual void engine() = 0;
};

class MotorcycleParts :public VehicleParts
{
	MotorcycleParts() {}
	virtual ~MotorcycleParts() {}

	virtual void wheels() = 0;
	virtual void engine() = 0;
};
