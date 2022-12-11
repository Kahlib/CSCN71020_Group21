#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* analyzeTriangle(int, int, int);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		//testing whether 3 inputs form a scalene triangle or not
		TEST_METHOD(TestMethod1)
		{
			char* result = analyzeTriangle(4, 5, 6);
			char* expected = { "Scalene triangle" };
			Assert::AreEqual(result, expected);
		}


		//testing whether 3 inputs form an isosceles triangle or not
		TEST_METHOD(TestMethod2)
		{
			char* result = analyzeTriangle(4, 4, 1);
			char* expected = { "Isosceles triangle" };
			Assert::AreEqual(result, expected);
		}

		//testing whether 3 inputs form an equilateral triangle or not
		TEST_METHOD(TestMethod3)
		{
			char* result = analyzeTriangle(10, 10, 10);
			char* expected = { "Equilateral triangle" };
			Assert::AreEqual(result, expected);
		}

		//testing whether 3 inputs form a triangle or not
		TEST_METHOD(TestMethod4)
		{
			char* result = analyzeTriangle(1, 10, 100);
			char* expected = { "Not a triangle" };
			Assert::AreEqual(result, expected);
		}
	};
}
