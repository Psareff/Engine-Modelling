#pragma once
#include "IEngine.hpp"
#include "TorqueFromSpeed.hpp"
#include "EngineCharacteristics.hpp"
class InternalCombustionEngine : public IEngine
{
public:
	InternalCombustionEngine(
		EngineCharacteristics engine_characteristics,
		TorqueFromSpeed torque_from_speed,
		double ambient_temperature);
	~InternalCombustionEngine();
	
	void Run(double step) override;
	void ResetEngine() override;
	EngineCondition getEngineCondition() const override;
private:
	EngineCharacteristics engine_characteristics_;
	TorqueFromSpeed torque_from_speed_;

	EngineCondition engine_condition_;
	double ambient_temperature_;
};

inline EngineCondition InternalCombustionEngine::getEngineCondition() const
{
	return engine_condition_;
}