#include<iostream>
#include<string>
#include "Time.h"

using namespace std;



void main()
{
	setlocale(0, "");

	Time x = Time(1, 1, 1);

	cout << x.TimeInString() << endl;
	cout << x.TimeInString('d') << endl;
	cout << x.TimeInString("hms") << endl;
	cout << x.TimeInString("hms", 'd') << endl;
	cout << endl;
	cout << endl;

	float hms = x.TimeInHour();
	cout << hms << endl;
	hms = x.TimeInMinute();
	cout << hms << endl;
	hms = x.TimeInSecond();
	cout << hms << endl;
	cout << endl;
	cout << endl;

	short pole = x.GetHour();
	cout << pole << endl;
	pole = x.GetMinute();
	cout << pole << endl;
	pole = x.GetSecond();
	cout << pole << endl;
	cout << endl;
	cout << endl;

	x.SetHour(10);
	x.SetMinute(32);
	x.SetSecond(90);
	cout << x.TimeInString('d') << endl;
	cout << endl;
	cout << endl;

	x.AddHour(190);
	cout << x.TimeInString('d') << endl;
	x.AddMinute(1000);
	cout << x.TimeInString('d') << endl;
	x.AddSecond(10000);
	cout << x.TimeInString('d') << endl;
	cout << endl;
	cout << endl;

	x.SubHour(7);
	cout << x.TimeInString('d') << endl;
	x.SubMinute(901);
	cout << x.TimeInString('d') << endl;
	x.SubSecond(5000);
	cout << x.TimeInString('d') << endl;
	cout << endl;
	cout << endl;

	x = Time(2, 3, 3);
	Time y = Time(1, 54, 3);

	if (x == y)
		cout << "x == y" << endl;

	if (x != y)
		cout << "x != y" << endl;

	if (x > y)
		cout << "x > y" << endl;

	if (x < y)
		cout << "x < y" << endl;

	if (x >= y)
		cout << "x >= y" << endl;

	if (x <= y)
		cout << "x <= y" << endl;


	system("pause");
}

