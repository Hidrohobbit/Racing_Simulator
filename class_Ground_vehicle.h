#pragma once
#include <string>

class Ground_vehicle
{
public:
	double get_speed();
	double get_time_first_rest();
	double get_time_second_rest();
	double get_time_next_rest();
	double get_time_before_rest();

	std::string get_name();

	Ground_vehicle();
protected:

	double speed;
	double time_first_rest;
	double time_second_rest;
	double time_next_rest;
	double time_before_rest;

	std::string name;
};