#include"ObjectToFile.h"


/**
	������ ������� � ����
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
//	������ ������� � ����
//**/
//void vectorToFile(VecTime Vec, string NameFile)
//{
//
//}
//
//
//
///**
//	������ ������� �� �����
//**/
//ArrTime fileToArray(string NameFile)
//{
//
//}
//
///**
//	������ ������� �� �����
//**/
//VecTime fileToVector(string NameFile)
//{
//
//}
//
//
//
///**
//	����� ����������� ������� � �����
//**/
//int lengthArrayInFile(ReadFile NameVarFile)
//{
//	return
//}