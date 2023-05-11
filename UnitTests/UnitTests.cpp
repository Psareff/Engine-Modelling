#include "pch.h"
#include "CppUnitTest.h"

#include "../EngineTester/TorqueFromSpeed.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTests
{
	TEST_CLASS(TorqueFromSpeed)
	{
	public:
		TEST_METHOD(operator(double x))
		{
			TorqueFromSpeed* a = new TorqueFromSpeed();
			Assert::AreEqual(0.0 , a->TestOperator(20));
		}
	};
}
