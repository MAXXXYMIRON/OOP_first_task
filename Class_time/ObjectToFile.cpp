#include"ObjectToFile.h"


/**
	Запись массива в файл
**/
void arrayToFile(ArrTime Arr, unsigned lengthArr, string NameFile)
{
	WriteFile File;
	File.open(NameFile);

	if (!File.is_open()) throw 1;

	for (int i = 0; i < lengthArr; i++)
	{
		File << Arr[i].TimeInString() << endl;
	}

	File.close();
}

///**
//	Запись вектора в файл
//**/
//void vectorToFile(VecTime Vec, string NameFile)
//{
//
//}
//
//
//
///**
//	Чтение массива из файла
//**/
//ArrTime fileToArray(string NameFile)
//{
//
//}
//
///**
//	Чтение вектора из файла
//**/
//VecTime fileToVector(string NameFile)
//{
//
//}
//
//
//
///**
//	Поиск размерности массива в файле
//**/
//int lengthArrayInFile(ReadFile NameVarFile)
//{
//	return
//}