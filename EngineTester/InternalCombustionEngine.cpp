#include "IEngine.hpp"
#include "TorqueFromSpeed.hpp"
#include "EngineCharacteristics.hpp"

class InternalCombustionEngine : IEngine
{
public: 
	InternalCombustionEngine(
		EngineCharacteristics engine_characteristics,
		TorqueFromSpeed torque_from_speed)
		: 
		engine_characteristics_(engine_characteristics),
		torque_from_speed_(torque_from_speed) {}

	EngineCondition getEngineCondition() const override
	{
		return engine_condition_;
	}
	~InternalCombustionEngine() override {};
private:
	EngineCharacteristics engine_characteristics_;
	EngineCondition engine_condition_;
	TorqueFromSpeed torque_from_speed_;
};