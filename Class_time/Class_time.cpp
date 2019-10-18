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
	
	//ArrTime ArrT = mekeArrTime(n);
	VecTime VecT = fileToVector("FileTime.txt");
	//VecLinkTime VecLinkT = makeVecLinkOnTime(n);

	//DisplayArrayTime(ArrT, n);
	DisplayArrayTime(VecT);
	//DisplayArrayTime(VecLinkT);

	//arrayToFile(ArrT, n, "FileTime.txt");

	system("pause");
}

