#pragma once

const int CIVIL_CAR = 1;
const int MOTOCYCLE = 2;

class Factory;

class Vehicle
{
	friend class Factory;
protected:
	Vehicle();
	virtual ~Vehicle();

public:
	virtual void doRun() = 0;
};

class CivilCar : public Vehicle
{
	friend class Factory;
protected:
	CivilCar();
	virtual ~CivilCar();

public:
	virtual void doRun();
};

class Motorcycle : public Vehicle
{
	friend class Factory;
protected:
	Motorcycle();
	virtual ~Motorcycle();

public:
	virtual void doRun();

};