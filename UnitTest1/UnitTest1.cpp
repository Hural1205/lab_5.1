#include "pch.h"
#include "CppUnitTest.h"
#include "../АП laba 5.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			
			Assert::AreEqual(k(1, 1),0.6909,0.05);
		}
	};
}
