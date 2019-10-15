#include<iostream>
#include<string>
#include "Time.h"

using namespace std;


void main()
{
	setlocale(0, "");
	Time x = Time(5);

	x.SubSecond(1000000);

	cout << x.TimeInString('d') << endl;

	system("pause");
}

