#include"ArrayTime.h"


/**
	�������� ������� ��������
**/
ArrTime makeArrTime(unsigned n)
{
	ArrTime ArrT = new Time[n];

	for (unsigned i = 0; i < n; i++)
	{
		ArrT[i] = Time(i);
	}

	return ArrT;
}


/**
	�������� ������� ��������
**/
VecTime makeVecTime(unsigned n)
{
	VecTime VecT;
	VecT.resize(n);

	for (unsigned i = 0; i < n; i++)
	{
		VecT[i] = Time(i);
	}

	return VecT;
}


/**
	�������� ������� ���������� �� ������
**/
VecLinkTime makeVecLinkOnTime(unsigned n)
{
	VecLinkTime VecLinkT;
	VecLinkT.resize(n);

	for (unsigned i = 0; i < n; i++)
	{
		VecLinkT[i] = new Time(i);
	}

	return VecLinkT;
}



/**
	����� ������� ��������
**/
void DisplayArrayTime(ArrTime ArrT, unsigned n)
{
	for (unsigned i = 0; i < n; i++)
	{
		cout << ArrT[i].TimeToString() << endl;
	}
}
/**
	����� ������� ��������
**/
void DisplayArrayTime(VecTime VecT)
{
	for (unsigned i = 0; i < VecT.size(); i++)
	{
		cout << VecT[i].TimeToString() << endl;
	}
}
/**
	����� ������� ���������� �� ������
**/
void DisplayArrayTime(VecLinkTime VecLinkT)
{
	for (unsigned i = 0; i < VecLinkT.size(); i++)
	{
		cout << VecLinkT[i]->TimeToString() << endl;
	}
}

/**
	�������� ������� ���������� �� ������
**/
void DelLinkVec(VecLinkTime& VecLinkT)
{
	for (int i = 0; i < VecLinkT.size(); i++)
	{
		VecLinkT[i] = nullptr;
	}
}