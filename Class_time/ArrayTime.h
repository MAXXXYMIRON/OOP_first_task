#pragma once
#include<vector>
#include "Time.h"

typedef std::vector<Time> VecTime;
typedef Time* ArrTime;
typedef std::vector<Time*> VecLinkTime;

/**
	�������� ������� ��������
**/
ArrTime makeArrTime(unsigned n);
/**
	�������� ������� ��������
**/
VecTime makeVecTime(unsigned n);
/**
	�������� ������� ���������� �� ������
**/
VecLinkTime makeVecLinkOnTime(unsigned n);

/**
	����� ������� ��������
**/
void DisplayArrayTime(ArrTime ArrT, unsigned n);
/**
	����� ������� ��������
**/
void DisplayArrayTime(VecTime VecT);
/**
	����� ������� ���������� �� ������
**/
void DisplayArrayTime(VecLinkTime VecLinkT);