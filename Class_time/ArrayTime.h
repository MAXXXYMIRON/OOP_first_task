#pragma once
#include<vector>
#include "Time.h"

typedef std::vector<Time> VecTime;
typedef Time* ArrTime;

/**
	�������� ������� ��������
**/
ArrTime memoArrTime(unsigned n);
/**
	�������� ������� ��������
**/
VecTime makeVecTime(unsigned n);


/**
	������������� ��. �������
**/
void initArrTime(unsigned n, ArrTime ArrTime);
/**
	������������� ��. �������
**/
void initVecTime(VecTime& VecTime);