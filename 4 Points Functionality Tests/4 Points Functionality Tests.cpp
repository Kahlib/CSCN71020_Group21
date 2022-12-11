#include "pch.h"
#include "CppUnitTest.h"

extern "C" bool* IfRectangle(float, float, float, float, float, float, float, float);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My4PointsFunctionalityTests
{
	TEST_CLASS(My4PointsFunctionalityTests)
	{
	public:
		
		//Tests if it is a rectangle
		TEST_METHOD(FourPointTest1)
		{
			bool check = IfRectangle(1, 1, 1, 6, 2, 6, 2, 1);
			Assert::AreEqual(true, check);
		}

		//Tests if it is not a rectangle
		TEST_METHOD(FourPointTest2)
		{
			bool check = IfRectangle(2, 1, 2, 11, 4, 10, 4, 1);
			Assert::AreEqual(false, check);
		}

		//Tests if this is a triangle
		TEST_METHOD(FourPointTest3)
		{
			bool check = IfRectangle(2, 6, 2, 2, 10, 2, 10, 6);
			Assert::AreEqual(true, check);
		}

		//Tests if it is not a triangle
		TEST_METHOD(FourPointTest4)
		{
			bool check = IfRectangle(10, 10, 12, 6, 10, 4, 6, 8);
			Assert::AreEqual(false, check);
		}
	};
}
