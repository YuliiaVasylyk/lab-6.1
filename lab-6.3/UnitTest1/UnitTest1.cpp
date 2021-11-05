#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab-6.3\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[4] = { 1,2,3,4 };
			int max = Max(a, 4);
			Assert::AreEqual(4, max);

		}
	};
}
