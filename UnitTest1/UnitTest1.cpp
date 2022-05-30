#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\vladt\source\repos\PR3.6 OOP\PR3.6 OOP\B3.h"
#include "C:\Users\vladt\source\repos\PR3.6 OOP\PR3.6 OOP\D3.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::IsTrue(is_base_of<B3, D3>::value);

		}
	};
}
