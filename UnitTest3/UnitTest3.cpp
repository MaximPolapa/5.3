#include "pch.h"
#include "CppUnitTest.h"
#include "..\5.3\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest3
{
	TEST_CLASS(UnitTest3)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double temp;
			temp = f(0.);
			Assert::AreEqual(0., temp);
		}
	};
}
