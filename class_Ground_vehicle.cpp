#include "class_Ground_vehicle.h"

double Ground_vehicle::get_speed()
{
	return speed;
}

double Ground_vehicle::get_time_first_rest()
{
	return time_first_rest;
}

double Ground_vehicle::get_time_second_rest()
{
	return time_second_rest;
}

double Ground_vehicle::get_time_next_rest()
{
	return time_next_rest;
}

double Ground_vehicle::get_time_before_rest()
{
	return time_before_rest;
}

std::string Ground_vehicle::get_name()
{
	return name;
}

Ground_vehicle::Ground_vehicle()
{
	speed = 0;
	time_first_rest  = 0;
	time_second_rest = 0;
	time_next_rest   = 0;
	time_before_rest = 0;

	name = "none";
}
