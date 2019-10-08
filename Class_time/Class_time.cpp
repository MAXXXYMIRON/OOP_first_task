#include<iostream>
#include<string>
#include "Time.h"

using namespace std;



void main()
{
	setlocale(0, "");

	Time halfPastSix = Time(1, 31, 11);
	halfPastSix.Display();
	Time halfPastSeven = Time(6, 32, 21);
	halfPastSeven.Display();

	Time Summ = Summ.AddTime(halfPastSix, halfPastSeven);
	Summ.Display();

	system("pause");
}

