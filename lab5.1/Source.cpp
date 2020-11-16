// Lab 5_1
#include <iostream>
#include <cmath>
using namespace std;
double f(const double a, const double b, const double c); // прототип
int main()
{
	double s, t;
		cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;
	double q = (f(1, pow(t,2), s) + f(t, pow(s,2), 1)) / (1 + f(1, t*s, 1)*f(1, t*s, 1));
	cout << "q = " << q << endl;
	return 0;
}
double f(const double a, const double b, const double c) // визначення
{
	return (sin(a*b*c)*sin(a*b*c) / (a*a + b*b +c*c));
}