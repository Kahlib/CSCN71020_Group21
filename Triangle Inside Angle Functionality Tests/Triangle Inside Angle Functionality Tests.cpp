#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* analyzeTriangle(int, int, int);
extern "C" float* AngleFinder(int, int, int);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TriangleInsideAngleFunctionalityTests
{
	TEST_CLASS(TriangleInsideAngleFunctionalityTests)
	{
	public:
		
		//tests equilateral triangle
		TEST_METHOD(AngleFinderTest1)
		{
			float* result = AngleFinder(10, 10, 10);
			float* expected = {60, 60, 60};
			Assert::AreEqual(result, expected);
		}

		//tests right angle triangle
		TEST_METHOD(AngleFinderTest2)
		{
			float* result = AngleFinder(10, 10, 14.14);
			float* expected = { 45, 45, 90 };
			Assert::AreEqual(result, expected);
		}

		//testing whether 3 inputs form a triangle or not
		TEST_METHOD(AngleFinderTest3)
		{
			char* result = analyzeTriangle(1, 10, 100);
			char* expected = { "Not a triangle" };
			Assert::AreEqual(result, expected);
		}

		//test scalene triangle
		TEST_METHOD(AngleFinderTest4)
		{
			float* result = AngleFinder(10, 17.32, 20);
			float* expected = { 60, 30, 90 };
			Assert::AreEqual(result, expected);
		}
	};
}
