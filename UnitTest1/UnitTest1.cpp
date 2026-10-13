#include "pch.h"
#include "CppUnitTest.h"
#include "../lab052/lab052.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a = -0.5;
			A(0.5, 1, a);
			Assert::AreEqual(0.125 / 3, a, 1e-9);
		}
        TEST_METHOD(TestS_x05)
        {
            int n;
            double s;
            S(0.5, 1e-6, n, s);
            double expected = acos(-1.) / 2 - atan(0.5);
            Assert::AreEqual(expected, s, 1e-5);
        }
        TEST_METHOD(TestS_xMinus03)
        {
            int n;
            double s;
            S(-0.3, 1e-6, n, s);
            double expected = acos(-1.) / 2 - atan(-0.3);
            Assert::AreEqual(expected, s, 1e-5);
        }
        TEST_METHOD(TestS_x0)
        {
            int n;
            double s;
            S(0, 1e-6, n, s);
            Assert::AreEqual(acos(-1.) / 2, s, 1e-9);
            Assert::AreEqual(1, n);
        }
	};
}
