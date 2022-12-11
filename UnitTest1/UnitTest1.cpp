#include "pch.h"
#include "CppUnitTest.h"

extern "C" char* analyzeTriangle(int, int, int);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char* status = analyzeTriangle(4, 5, 6);
			char* expected = { "Scalene Triangle" };
			Assert::AreEqual(status, expected);
		}

		TEST_METHOD(TestMethod2)
		{
		}
	};
}
