#include "pch.h"
#include "CppUnitTest.h"
#include "E:\oop\LB_5.1_A\Cursor.h"
#include "E:\oop\LB_5.1_A\Cursor.cpp"
#include "E:\oop\LB_5.1_A\Exception.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51A
{
	TEST_CLASS(UnitTest51A)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Cursor TEST(2, 2);
			
			Assert::AreEqual(TEST.Check_2(2),true);
		}
	};
}
