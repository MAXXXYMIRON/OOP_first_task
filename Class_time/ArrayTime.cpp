#include"ArrayTime.h"


/**
	�������� ������� ��������
**/
Time* memoArrTime(unsigned n)
{
	Time* ArrTime = new Time[n];
	return ArrTime;
}
/**
	�������� ������� ��������
**/
VecTime makeVecTime(unsigned n)
{
	VecTime VecT;
	VecT.resize(n);
	return VecT;
}


/**
	������������� ��. �������
**/
void initArrTime(unsigned n, Time* ArrTime)
{
	for (unsigned i = 0; i < n; i++)
	{
		ArrTime[i] = Time(i);
	}
}
/**
	������������� ��. �������
**/
void initVecTime(VecTime& VecTime)
{
	for (unsigned i = 0; i < VecTime.size(); i++)
	{
		VecTime[i] = Time(i);
	}
}