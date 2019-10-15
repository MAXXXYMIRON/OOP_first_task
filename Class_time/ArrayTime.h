#pragma once
#include<iostream>
#include<vector>
#include<string>
#include "Time.h"

typedef std::vector<Time> VecTime;

/**
	Создание массива объектов
**/
Time* memoArrTime(unsigned n);
/**
	Создание вектора объектов
**/
VecTime makeVecTime(unsigned n);


/**
	Инициализация эл. массива
**/
void initArrTime(unsigned n, Time* ArrTime);
/**
	Инициализация эл. вектора
**/
void initVecTime(VecTime& VecTime);