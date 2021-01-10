#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace testlab52
{
	TEST_CLASS(testlab52)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double t;
			t = A(1, 2, 3);
			Assert::AreEqual(t, 0*1.);
		}
	};
}
