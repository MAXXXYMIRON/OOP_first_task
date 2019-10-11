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
	Time operator + (const Time& addTwo);
	//��������� ���� ����������� ������ Time
	Time operator - (const Time& addTwo);


	//����������� ����� � �������
	void AddHour(unsigned H);
	//����������� ����� � �������
	void AddMinute(unsigned M);
	//����������� ������ � �������
	void AddSecond(unsigned S);

	
	//��������� ����� �� �������
	void SubHour(unsigned H);
	//��������� ����� �� �������
	void SubMinute(unsigned M);
	//��������� ������ �� �������
	void SubSecond(unsigned S);


	//������� ������� � ����
	//����� ���-�� ����� � ������� ������� 
	short TimeInHour();
	//������� ������� � ������
	//����� ���-�� ����� � ������� ������� 
	short TimeInMinute();
	//������� ������� � �������
	//����� ���-�� ������ � ������� ������� 
	short TimeInSecond();


	//������������� ������� � ������
	string TimeInString();


	//������� �������� ���� �����
	short GetHour();
	//������� �������� ���� �����
	short GetMinute();
	//������� �������� ���� ������
	short GetSecond();


	//�������� ���� �����
	void SetHour(short H);
	//�������� ���� �����
	void SetMinute(short M);
	//�������� ���� �����
	void SetSecond(short S);


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

