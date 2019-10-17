#pragma once

#include<fstream>
#include "Time.h"
#include "ArrayTime.h" 

typedef ofstream WriteFile;
typedef ifstream& ReadFile;


/**
	Запись массива в файл
**/
void arrayToFile(ArrTime Arr, unsigned lengthArr, string NameFile);
/**
	Запись вектора в файл
**/
void vectorToFile(VecTime Vec, string NameFile);



/**
	Чтение массива из файла
**/
ArrTime fileToArray(string NameFile);
/**
	Чтение вектора из файла
**/
VecTime fileToVector(string NameFile);



/**
	Поиск размерности массива в файле
**/
int lengthArrayInFile(ReadFile NameVarFile);