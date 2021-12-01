#include "B.h"
#include <iostream>

using namespace std;

	int main()
	{
		A a(1);
		A* a2 = &a;
		B b(2);
		B* b2 = &b;
		try
		{
			B(b2) = B(a);
			cout << "Continue" << endl;
		}
		catch (B)
		{
			cout << "catch(B)" << endl;
			exit(1);
		}
		catch (A)
		{
			cout << "catch(A)" << endl;
			exit(2);
		}
		cout << "End" << endl;
		return 0;
	}
