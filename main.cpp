#include <iostream>

#include "class_Ground_vehicle.h"
#include "class_Camel.h"
#include "class_Fast_camel.h"


void race()
{
	Camel camel;
	Fast_camel fast_camel;

	std::cout << "\t\t\t\t!!!! Start RACE !!!!";

	double distance = 10000;

	double first_v = distance / camel.get_speed();
	double rest = first_v / camel.get_time_before_rest();

	if (rest >= 2)
	{
		first_v = first_v + ((rest) * camel.get_time_next_rest());
	}
	else if ( (rest < 2) && (rest >= 1))
	{
		first_v += camel.get_time_next_rest();
	}

	std::cout << "Result:\n" << camel.get_name() << "\t Time: " << first_v << "\tTime to rest: " << rest;

}

int main()
{
	
	
	return 0;
}