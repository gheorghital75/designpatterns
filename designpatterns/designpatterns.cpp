#include <iostream>

#include"vehicle.h"
#include "factory.h"
#include "vehicle_parts.h"
#include"abstract_factory.h"

using std::cout;
using std::endl;

int main(int argc, char* argv[])
{/*
	Vehicle* p = Factory::createInstance(1);
	if (p)
	{
		p->doRun();
	}
	Vehicle* q = Factory::createInstance(2);
	if (q)
	{
		q->doRun();
	}
	int result = Factory::destroyInstance(p);
	cout << "Destroying p:" << result << endl;

	result = Factory::destroyInstance(q);
	cout << "Destroying p:" << result << endl;
	*/

AbstractPartsFactory* pCivilCarF = new CivilCarsPartsFactory;
AbstractPartsFactory* pMotorcycleF = new MotorcyclePartsFactory;

VehicleParts* pC = pCivilCarF->createVehicleParts();

pC->engine();
pC->wheels();

delete pC; pC = nullptr;

VehicleParts* pM = pMotorcycleF->createVehicleParts();

pM->engine();
pM->wheels();

delete pM; pM = nullptr;

	return 0;
}
