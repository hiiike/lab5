#include <iostream>
#include "Cursor.h"
#include <exception>


using namespace std;

int main()
{
	bool init;
	Cursor a;

	do
	{
		try
		{
			init = true;
			cin >> a;
		}
		catch (bad_exception& e)
		{
			init = false;
			cerr << e.what() << endl;
		}
	} while (!init);

	Cursor d;
	cout << endl << a << endl;
	int c, g;
	cout << endl << "Enter first argument "; cout << endl;
	cin >> c;
	cout << endl << "Enter second argument "; cout << endl;
	cin >> g;
	cout << endl;

	a.ChangeX(c);
	a.ChangeY(g);
	a.Check_1(g);
	a.Check_2(c);
	cout << a << endl;
	return 0;
}
