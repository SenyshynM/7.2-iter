#include "pch.h"
#include "CppUnitTest.h"
#include "../7.2 iteration/7.2 iteration.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			int q[3][3] = { {1,1,1},{2,2,2},{3,3,3} };
			int s;
			int* q1[3] = { q[0],q[1],q[2] };

			s = Sum(q1, 3, 3);

			Assert::AreEqual(3, s);
		}
	};
}
