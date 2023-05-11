#include <iostream>
#include <vector>

#include "EngineCondition.hpp"
#include "TorqueFromSpeed.cpp"

int main()
{
#pragma region initial_values
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

#pragma endregion

	TorqueFromSpeed* a = new TorqueFromSpeed({ {0, 20}, {75, 75}, {150, 100}, {200, 105}, {250, 75}, {300, 0} });
	
	try {
		std::cout << (*a)(143) << " ";
	}

	catch (std::invalid_argument& e) {
		std::cerr << e.what();
	}
}