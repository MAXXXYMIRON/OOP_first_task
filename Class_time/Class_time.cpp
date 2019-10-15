#include<iostream>
#include<string>
#include "Time.h"
#include "ArrayTime.h" 

using namespace std;


void main()
{
	setlocale(0, "");
	const unsigned n = 24;
	
	Time *ArrTime = memoArrTime(n);
	initArrTime(n, ArrTime);

	system("pause");
}

