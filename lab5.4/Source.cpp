#include <iostream>
#include <cmath>
using namespace std;
double S0(const int K, const int N)

{
	double s = 0;
	for (int k = 1; k <= N; k++)
		s += 1 / pow((2*k+1),2);
	return s;
}

double S1(const int K, const int N, const int k)
{
	if (k > N)
		return 0;
	else
		return  1 / pow((2 * k + 1), 2) + S1(K, N, k + 1);
}

double S2(const int K, const int N, const int k)
{
	if (k < K)
		return 0;
	else
		return  1 / pow((2 * k + 1), 2) + S2(K, N, k - 1);
}

double S3(const int K, const int N, const int k, double t)
{
	t = t + 1 / pow((2 * k + 1), 2);
	if (k >= N)
		return t;
	else
		return S3(K, N, k + 1, t);
}

double S4(const int K, const int N, const int k, double t)
{
	t = t + 1 / pow((2 * k + 1), 2);
	if (k <= K)
		return t;
	else
		return S4(K, N, k - 1, t);
}

int main()
{
	int K, N;
	cout << "K = "; cin >> K;
	cout << "N = "; cin >> N;
	cout << "        (iter) S0=    " << S0(K, N) << endl;
	cout << "  (rec up ++) S1 =    " << S1(K, N, K) << endl;
	cout << "  (rec up --) S2 =    " << S2(K, N, N) << endl;
	cout << "(rec down ++) S3 =    " << S3(K, N, K, 0) << endl;
	cout << "(rec down --) S4 =    " << S4(K, N, N, 0) << endl;
	return 0;
}
