#pragma once
#include<iostream>
#include<vector>
#include<string>
#include "Time.h"

typedef std::vector<Time> VecTime;

/**
	�������� ������� ��������
**/
Time* memoArrTime(unsigned n);
/**
	�������� ������� ��������
**/
VecTime makeVecTime(unsigned n);


/**
	������������� ��. �������
**/
void initArrTime(unsigned n, Time* ArrTime);
/**
	������������� ��. �������
**/
void initVecTime(VecTime& VecTime);