#pragma once
#include<vector>
#include "Time.h"

typedef std::vector<Time> VecTime;
typedef Time* ArrTime;
typedef std::vector<Time*> VecLinkTime;

/**
	Создание массива объектов
**/
ArrTime makeArrTime(unsigned n);
/**
	Создание вектора объектов
**/
VecTime makeVecTime(unsigned n);
/**
	Создание вектора указателей на объект
**/
VecLinkTime makeVecLinkOnTime(unsigned n);

/**
	Вывод массива объектов
**/
void DisplayArrayTime(ArrTime ArrT, unsigned n);
/**
	Вывод вектора объектов
**/
void DisplayArrayTime(VecTime VecT);
/**
	Вывод вектора указателей на объект
**/
void DisplayArrayTime(VecLinkTime VecLinkT);