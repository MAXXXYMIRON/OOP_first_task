#include<iostream>
#include<string>
#include "Time.h"

using namespace std;



void main()
{
	setlocale(0, "");

	Time x = Time(23, 59, 59);
	Time y = Time(23, 59, 59);

	Time c = x + y;
	c.Display();

	system("pause");
}

