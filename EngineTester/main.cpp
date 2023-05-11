#include <iostream>
#include <map>
#include<windows.h>

#include "InternalCombustionEngine.hpp"

int main()
{
#pragma region initial_values

	TorqueFromSpeed tfs( { {20, 0}, {75, 75}, {100, 150}, {105, 200}, {75, 250}, {0, 300} });
	EngineCharacteristics ec;
	ec.moment_of_inertia = 10;
	ec.heating_from_speed_coef = 0.0001;
	ec.heating_from_torque_coef = 0.1;
	ec.cooling_from_ambient_coef = 0.1;
	ec.overheat_temperature = 110;

#pragma endregion
	double ambient_temperature;
	std::cin >> ambient_temperature;
	IEngine* engine = new InternalCombustionEngine(ec, tfs, ambient_temperature);
	engine->ResetEngine();
	for (int i = 0; i < 100; i += 0.01)
	{
		engine->Run(0.01);
		std::cout << "Crankshaft speed: ";
		std::cout << engine->getEngineCondition().crankshaft_speed << std::endl;
		std::cout << "Temp: ";
		std::cout << engine->getEngineCondition().temp << std::endl;
		Sleep(5);
		system("cls");
	}
}