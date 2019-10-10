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
	//��������� ���� ����������� ������ Time
	Time SubTime(const Time addOne, const Time addTwo);


	//����������� ����� � �������
	void AddHour(int H);
	//����������� ����� � �������
	void AddMinute(int M);
	//����������� ������ � �������
	void AddSecond(int S);

	
	//��������� ����� �� �������
	void SubHour(int H);
	//��������� ����� �� �������
	void SubMinute(int M);
	//��������� ������ �� �������
	void SubSecond(int S);


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


	//������� ������� ���-�� �����
	short RetHour();
	//������� ������� ���-�� �����
	short RetMinute();
	//������� ������� ���-�� ������
	short RetSecond();


	//�������� ���� �����
	void ChangeHour(short H);
	//�������� ���� �����
	void ChangeMinute(short M);
	//�������� ���� �����
	void ChangeSecond(short S);


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

