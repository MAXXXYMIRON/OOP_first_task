#pragma once
#include<string>
#include<iostream>

using namespace std;

/**
	C���������� ����������� ���������� ������ Time
	short your_hour - ����
	short your_minute - ������
	short your_second - �������
	���� ����������, ���� ��� ��������� ������������ ��������
**/
class Time
{
private:
	short hour;
	short minute;
	short second;

public:
	Time();

	~Time();

	//C���������� ������������
	Time(short your_hour, short your_minute, short your_second);

	//�������� ���� ����������� ������ Time
	Time AddTime(const Time addOne, const Time addTwo);

	//����� ������� 
	void const Display();

private:
	//��������� ������� ������������ ������� ��������� �������
	//� ���������� ���������
	//flag h - ����
	//flag m - ������
	//flag s - �������
	//flag ����� - ���� ��� �����
	string units(char flag);
};

