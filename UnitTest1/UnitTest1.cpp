#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int actual;
			int expected = -0.85237;
			double p = 5;
			double q = 4;
			double c = k(p + sqrt(q), q - sqrt(p)) * k(p + sqrt(q), q - sqrt(p)) - k(1, p + q);
			actual = c;
			Assert::AreEqual(actual, expected);
		}
	};
}
