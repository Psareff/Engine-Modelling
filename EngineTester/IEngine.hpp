#pragma once
#include "EngineCondition.hpp"
class IEngine
{
public:
	virtual void Run(double step) = 0;
	virtual void ResetEngine() = 0;
	virtual EngineCondition getEngineCondition() const = 0;
};	