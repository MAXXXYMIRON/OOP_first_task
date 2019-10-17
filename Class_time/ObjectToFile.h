#pragma once

#include<fstream>
#include "Time.h"
#include "ArrayTime.h" 

typedef ofstream WriteFile;
typedef ifstream& ReadFile;


/**
	������ ������� � ����
**/
void arrayToFile(ArrTime Arr, unsigned lengthArr, string NameFile);
/**
	������ ������� � ����
**/
void vectorToFile(VecTime Vec, string NameFile);



/**
	������ ������� �� �����
**/
ArrTime fileToArray(string NameFile);
/**
	������ ������� �� �����
**/
VecTime fileToVector(string NameFile);



/**
	����� ����������� ������� � �����
**/
int lengthArrayInFile(ReadFile NameVarFile);