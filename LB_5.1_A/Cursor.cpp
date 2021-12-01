#include <iostream>
#include <cmath>
#include <string>
#include "Cursor.h"
#include "Exception.h"

using namespace std;

Cursor::Cursor()
{
	first = 0;
	second = 0;
}

Cursor::Cursor(int x = 0, int y = 0) 
{

	this->first = x;
	this->second = y;
}

void Cursor::SetFirst(int value)
{
	if (value > 0)
		first = value;
	else
		first = 0;
}

void Cursor::SetSecond(unsigned int value)
{
	if (value > 0)
		second = value;
	else
		second = 0;
}

Cursor& Cursor::operator = (const Cursor& r)
{
	first = r.first;
	second = r.second;
	return *this;
}

Cursor::operator string () const
{
	stringstream ss;
	ss << "first = " << first << endl;
	ss << "second = " << second << endl;
	return ss.str();
}


ostream& operator << (ostream& out, const Cursor& a)
{
	return out << " ( " << a.first << ", " << a.second << " ) ";
}

istream& operator >> (istream& in, Cursor& a) throw(const char*, bad_exception&)
{
	cout << "first = "; in >> a.first;
	if (a.first < 0 || a.first >= 200)
		throw bad_exception();

	cout << "second = "; in >> a.second;
	if (a.second < 0 || a.second >= 200)
		throw bad_exception();
	return in;
}

void Cursor::ChangeX(int N)
{
	first = N;
}

void Cursor::ChangeY(int G)
{
	second = G;
}

bool Cursor::Check_1(int G)
{
	if (G <= 200 && G > 0)
	{

		return true;
	}
	else
	{
		cout << "Wrong value" << endl;
		return 0;
	}
}

bool Cursor::Check_2(int N)
{

	if (N <= 200 && N > 0)
	{

		return true;
	}
	else
	{
		cout << "Wrong value" << endl;
		return 0;
	}
}
