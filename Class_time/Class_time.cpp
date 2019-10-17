#include<iostream>
#include<string>
#include "Time.h"
#include "ArrayTime.h" 
#include"ObjectToFile.h"


using namespace std;


void main()
{
	setlocale(0, "");
	const unsigned n = 24;
	
	ArrTime ArrT = memoArrTime(n);
	initArrTime(n, ArrT);

	arrayToFile(ArrT, n, "FileTime.txt");

	system("pause");
}

