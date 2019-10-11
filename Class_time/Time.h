#pragma once
#include<string>
#include<iostream>

using namespace std;

class Time
{
private:
	short hour;
	short minute;
	short second;

public:
	Time();
	~Time();
	//C���������� ����������� ���������� ������ Time
	//short your_hour - ����
	//short your_minute - ������
	//short your_second - �������
	//���� ����������, ���� ��� ��������� ������������ ��������
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
	float TimeInHour();
	//������� ������� � ������
	//����� ���-�� ����� � ������� ������� 
	float TimeInMinute();
	//������� ������� � �������
	//����� ���-�� ������ � ������� ������� 
	float TimeInSecond();


	//������������� ������� � ������
	string TimeInString();
	//������������� ������� � ������
	//���������� ������: � ������� �������� ���
	//flag - 'd'
	string TimeInString(char flag);
	//������������� ������� � ������
	//���������� ������: � ������� ������ �������
	//flag - 'hms'
	string TimeInString(string flag);
	//������������� ������� � ������
	//���������� ������: � ������� ������ �������
	//���������� ������: � ������� �������� ���
	//flag - 'hms'
	//flag2 - 'd'
	string TimeInString(string flag, char flag2);



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

	
	//��������� ���������
	bool operator == (const Time& SecondOperand);
	bool operator != (const Time& SecondOperand);
	bool operator > (const Time& SecondOperand);
	bool operator < (const Time& SecondOperand);
	bool operator <= (const Time& SecondOperand);
	bool operator >= (const Time& SecondOperand);

private:
	//��������� ������� ������������ ������� ��������� �������
	//� ���������� ���������
	//flag h - ����
	//flag m - ������
	//flag s - �������
	//flag ����� - ���� ��� �����
	string units(char flag);
};

