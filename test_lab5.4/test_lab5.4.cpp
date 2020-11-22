#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace testlab54
{
	TEST_CLASS(testlab54)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = S1(2, 1, 0);
			Assert::AreEqual(t, 1);
			
		}
	};
}
