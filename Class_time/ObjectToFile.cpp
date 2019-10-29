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
		File << Arr[i].TimeToString() << endl;
	}

	File.close();
}

/**
	������ ������� � ����
**/
void vectorToFile(VecTime Vec, string NameFile)
{
	WriteFile File;
	File.open(NameFile);

	if (!File.is_open()) throw 1;

	for (int i = 0; i < Vec.size(); i++)
	{
		File << Vec[i].TimeToString() << endl;
	}

	File.close();
}



/**
	������ ������� �� �����
**/
ArrTime fileToArray(string NameFile)
{
	unsigned n = 0;
	ReadFile File;
	File.open(NameFile);

	if (!File.is_open()) throw 2;
	else
	{
		n = lengthArrayInFile(File);
		if (n == 0) throw 3;
	}

	ArrTime Arr = makeArrTime(n);
	string sTime = "";

	for (unsigned i = 0; i < n; i++)
	{
		getline(File, sTime);
		Arr[i].StringToTime(sTime);
	}

	return Arr;
}

/**
	������ ������� �� �����
**/
VecTime fileToVector(string NameFile)
{
	unsigned n = 0;
	ReadFile File;
	File.open(NameFile);

	if (!File.is_open()) throw 2;
	else 
	{
		n = lengthArrayInFile(File);
		if (n == 0) throw 3;
	}

	VecTime Vec = makeVecTime(n);
	string sTime = "";
	
	for (unsigned i = 0; i < n; i++)
	{
		getline(File, sTime);
		Vec[i].StringToTime(sTime);
	}

	return Vec;
}



/**
	����� ����������� ������� � �����
**/
int lengthArrayInFile(ifstream& NameVarFile)
{
	int i = 0;
	string s = "";

	while (!NameVarFile.eof())
	{
		getline(NameVarFile, s);
		i++;
	}

	NameVarFile.clear();
	NameVarFile.seekg(0);
	return i - 1;
}