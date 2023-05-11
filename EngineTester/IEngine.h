#include "EngineCharacteristics.hpp"

#pragma once
class IEngine
{
public:
	virtual void Run();
	virtual EngineCondition getEngineCondition() const;
	virtual ~IEngine();
};	