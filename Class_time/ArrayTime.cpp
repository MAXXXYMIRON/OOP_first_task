#include"ArrayTime.h"


/**
	Создание массива объектов
**/
Time* memoArrTime(unsigned n)
{
	Time* ArrTime = new Time[n];
	return ArrTime;
}
/**
	Создание вектора объектов
**/
VecTime makeVecTime(unsigned n)
{
	VecTime VecT;
	VecT.resize(n);
	return VecT;
}


/**
	Инициализация эл. массива
**/
void initArrTime(unsigned n, Time* ArrTime)
{
	for (unsigned i = 0; i < n; i++)
	{
		ArrTime[i] = Time(i);
	}
}
/**
	Инициализация эл. вектора
**/
void initVecTime(VecTime& VecTime)
{
	for (unsigned i = 0; i < VecTime.size(); i++)
	{
		VecTime[i] = Time(i);
	}
}