#pragma once
#include<string>
#include<iostream>

using namespace std;
typedef char TypeTime;

class Time
{
private:
	TypeTime hour;
	TypeTime minute;
	TypeTime second;

public:
	Time();
	~Time();
	//C���������� ����������� ���������� ������ Time
	//���� ����������, ���� ��� ��������� ������������ ��������
	Time(TypeTime your_hour, TypeTime your_minute, TypeTime your_second);
	//���������� �������������� �������� ����� � �����
	Time(TypeTime your_hour);


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
	//���������� ������: � ������� ������ ������� � �������� ���
	//flag - 'hms'
	//flag2 - 'd'
	string TimeInString(string flag, char flag2);
	//������������� ������ ��������� ������� TimeInString() � �����
	void StringToTime(string strTime);
	



	//������� �������� ���� �����
	unsigned GetHour();
	//������� �������� ���� �����
	unsigned GetMinute();
	//������� �������� ���� ������
	unsigned GetSecond();


	//�������� ���� �����
	void SetHour(TypeTime H);
	//�������� ���� �����
	void SetMinute(TypeTime M);
	//�������� ���� �����
	void SetSecond(TypeTime S);

	
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

