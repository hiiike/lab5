#include <iostream>
#include <cmath>
#include <Windows.h>
#include <iomanip>

using namespace std;
double k(const double x);
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double zp, zk, g;
	int n;
	cout << "zp = "; cin >> zp;
	cout << "zk = "; cin >> zk;
	cout << "n = "; cin >> n;
	cout << "---------------------------------" << endl;
	cout << "|" << setw(8) << "k" << setw(8) << "|";
	cout << setw(8) << "g" << setw(8) << "|" << endl;
	cout << "---------------------------------" << endl;

	double zd = (zk - zp) / n;
	double z = zp;
	while (z <= zk)
	{
		g = k(z * z + 1) - k(z * z - 1) + (2 * k(z));

		cout << "|" << setw(8) << setprecision(3) << z << setw(8) << "|";
		cout << setw(8) << setprecision(3) << g << setw(8) << "|" << endl;

		z += zd;
	}
	cout << "---------------------------------" << endl;
	return 0;
}

double k(const double x)
{
	if (abs(x) >= 1)
		return (exp(x) + sin(x)) / (cos(x) * cos(x) + 1);
	else
	{
		double S = 0;
		int j = 0;
		double a = 1;
		S = a;
		do
		{
			j++;
			double R = x/j;
			a *= R;
			S += a;
		} while (j < 5);
		return ((1/exp(x))*S);
	}
}
