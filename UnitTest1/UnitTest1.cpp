#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\LEGION\source\repos\Lab_oop_4.1\Lab_oop_4.1\Figure.cpp"
#include "C:\Users\LEGION\source\repos\Lab_oop_4.1\Lab_oop_4.1\Rectangle.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UTOOP41
{
	TEST_CLASS(UTOOP41)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Rectangle B(4, 5);
			Assert::AreEqual(B.Square(), 20.0);
		}
	};
}