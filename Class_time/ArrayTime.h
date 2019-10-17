#pragma once
#include<vector>
#include "Time.h"

typedef std::vector<Time> VecTime;
typedef Time* ArrTime;

/**
	Создание массива объектов
**/
ArrTime memoArrTime(unsigned n);
/**
	Создание вектора объектов
**/
VecTime makeVecTime(unsigned n);


/**
	Инициализация эл. массива
**/
void initArrTime(unsigned n, ArrTime ArrTime);
/**
	Инициализация эл. вектора
**/
void initVecTime(VecTime& VecTime);