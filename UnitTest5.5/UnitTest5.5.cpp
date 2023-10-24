#include "pch.h"
#include "CppUnitTest.h"
#include "../ap_5.5/5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest55
{
	TEST_CLASS(UnitTest55)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double x = 1.0;
			double expected_result = 0.301169;
			double aclual_result = f(x);

			Assert::AreEqual(expected_result, aclual_result, 0.0001);
		}
	};
}
