#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab5.1\Source.cpp"  

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace testlab51
{
	TEST_CLASS(testlab51)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int A;
			A = f(5, 6, 1);
			Assert::AreEqual(A, 0);
		}
	};
}
