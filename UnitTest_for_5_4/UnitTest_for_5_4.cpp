#include "pch.h"
#include "CppUnitTest.h"
#include "../Laboratorna 5_4/Lab 5_4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestfor54
{
	TEST_CLASS(UnitTestfor54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a;
			a = S0(10, 20);
			Assert::AreEqual(a, 0.644021, 0.0001);
		}
	};
}
