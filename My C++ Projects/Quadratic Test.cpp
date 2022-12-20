#include<iostream>
#include<cmath>
using namespace std;
float a , b , c;
float X, X1, X2, d, e, Rp, Ip;
int main()
{
	cout << "The general formula for a quadratic equation is aX^2 + bX + c = 0 ." << endl;
	cout << "Insert the values of a, b and c :" << endl;
	cin >> a >> b >> c;
	d = b * b - 4 * a * c;
	e = sqrt (d);
	X1 = (-b + e ) / (2 * a);
	X2 = (-b - e) / (2 * a);
	if (d > 0)
	{
		cout << "The equation gives two distinct real roots." << endl;
		cout << "The values of x are:" << endl;
		cout << "X1 = " << X1 << " and X2 = " << X2 << endl;
	}
	else if (d == 0)
	{
		X = -b / 2 * a;
		cout << "The equation gives a repeated root" << endl << "The value of X is:" << endl;
		cout << "X = " << X << endl;
	}
	else
	{
		Rp = -b / 2 * a;
		Ip = sqrt(4 * a * c - b * b) / 2 * a;
		cout << "The equation gives complex roots" << endl << "The values of X are :" << endl;
		cout << "X1 = " << Rp << " + " << Ip << " i" << " and X2 =" << Rp << " - " << Ip << " i" << endl;
	}
	return 0;
}

