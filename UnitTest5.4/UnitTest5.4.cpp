#include "pch.h"
#include "CppUnitTest.h"
#include "../пр5.4/пр5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest54
{
	TEST_CLASS(UnitTest54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double v = S0(2, 5);
			Assert::AreEqual(v, -0.298258, 0.000001);

		}
	};
}
