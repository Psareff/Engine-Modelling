#include "EngineCondition.hpp"
#pragma once
class IEngine
{
public:
	virtual void Run() = 0;
	virtual EngineCondition getEngineCondition() const = 0;
	virtual ~IEngine() = 0;
};	