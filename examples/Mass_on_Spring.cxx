#include "ClassicalMechanics.hxx"
#include "Units.hxx"

#include <iostream>

using namespace PHYS;

int main()
{
	SimpleBody mass("m1", 10*Units::g);
	Spring spring("k1", 300*Units::N/Units::m, 10*Units::cm);

	spring.Place(Cartesian(0,0,0));
	mass.Place(Cartesian(0, -1, 0));

	spring.Attach(&mass);

	std::cout << mass.resolve() << std::endl;

	return 0;

}
