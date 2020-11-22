#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab5.3\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace testlab53
{
	TEST_CLASS(testlab53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = k(3);
			Assert::AreEqual(t, 10);
		}
	};
}
