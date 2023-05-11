#include <iostream>
#include <vector>
int main()
{
	double inertia_moment = 10;
	std::vector<std::pair<double, double>> dependence_of_torque_of_crankshaft_speed = { {20, 0},{75, 75},{100, 150},{105, 200},{75, 250}, {0, 300} };
	double overheat_temperature = 110;
	double dependence_of_heating_on_torque = 0.1;
	double dependence_of_heating_on_crankshaft_speed = 0.0001;
	double cooling_coefficient = 0.1;


	double ambient_temperature = 25;

	double current_speed = 0;
	double current_temperature = ambient_temperature;
	double current_crankshaft_speed = 0;



}