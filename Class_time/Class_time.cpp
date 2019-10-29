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
	
	Time x = Time(23, 53, 53) + Time(0, 0, 8);


	ArrTime ArrT = makeArrTime(n);
	VecTime VecT = fileToVector("FileTime.txt");
	VecLinkTime VecLinkT = makeVecLinkOnTime(n);

	DisplayArrayTime(ArrT, n);
	DisplayArrayTime(VecT);
	DisplayArrayTime(VecLinkT);

	DelLinkVec(VecLinkT);

	//arrayToFile(ArrT, n, "FileTime.txt");

	system("pause");
}

