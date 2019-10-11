#include "Time.h"

//����������� �����������
Time::Time() {}
//����������
Time::~Time() {}
//C���������� ������������
Time::Time(short your_hour, short your_minute, short your_second)
{
	hour = (your_hour <= 23 && your_hour >= 0) ? your_hour : 0;
	minute = (your_minute <= 59 && your_minute >= 0) ? your_minute : 0;
	second = (your_second <= 59 && your_second >= 0) ? your_second : 0;
}


//�������� ���� ����������� ������ Time
Time Time::operator + (const Time& addTwo)
{
	Time Res;

	Res.hour = hour + addTwo.hour;
	Res.minute = minute + addTwo.minute;
	Res.second = second + addTwo.second;

	return Res;
}

//��������� ���� ����������� ������ Time
Time Time::operator - (const Time& addTwo)
{
	Time Res;

	Res.hour = hour - addTwo.hour;
	Res.minute = minute - addTwo.minute;
	Res.second = second - addTwo.second;

	return Res;
}



//����������� ����� � �������
void Time::AddHour(unsigned H)
{

}

//����������� ����� � �������
void Time::AddMinute(unsigned M)
{

}

//����������� ������ � �������
void Time::AddSecond(unsigned S)
{

}



//��������� ����� �� �������
void Time::SubHour(unsigned H)
{

}

//��������� ����� �� �������
void Time::SubMinute(unsigned M)
{

}

//��������� ������ �� �������
void Time::SubSecond(unsigned S)
{

}



//������� ������� � ����
//����� ���-�� ����� � ������� ������� 
short Time::TimeInHour()
{
	short H = 0;

	return H;
}

//������� ������� � ������
//����� ���-�� ����� � ������� ������� 
short Time::TimeInMinute()
{
	short M = 0;

	return M;
}

//������� ������� � �������
//����� ���-�� ������ � ������� ������� 
short Time::TimeInSecond()
{
	short S = 0;

	return S;
}



//������������� ������� � ������
string Time::TimeInString()
{
	string TimeString = "";

	return TimeString;
}



//������� �������� ���� �����
short Time::GetHour()
{
	return hour;
}

//������� �������� ���� �����
short Time::GetMinute()
{
	return minute;
}

//������� �������� ���� ������
short Time::GetSecond()
{
	return second;
}



//�������� ���� �����
void Time::SetHour(short H)
{

}

//�������� ���� �����
void Time::SetMinute(short M)
{

}

//�������� ���� �����
void Time::SetSecond(short S)
{

}



//����� �������
void const Time::Display()
{
	cout << hour << " " << units('h') << endl;
	cout << minute << " " << units('m') << endl;
	cout << second << " " << units('s') << endl;
	cout << hour << " : " << minute << " : " << second << " - " << units('a') << endl;
}

///////////////////////////////////////////////////////////////////////////////////
//private

//��������� ������� ������������ ������� ��������� �������
//� ���������� ���������, ���. � ������� ������
//flag h - ����
//flag m - ������
//flag s - �������
//flag ����� - ���� ��� �����
string Time::units(char flag)
{
	if (flag == 'h')
	{
		if (hour == 1 || hour - 20 == 1) return "���";

		if ((hour % 20) == 2 || (hour % 20) == 3 || (hour % 20) == 4 ||
			hour == 2 || hour == 3 || hour == 4) return "����";

		return "�����";
	}
	else if (flag == 'm')
	{
		if ((minute % 10) == 1 && minute != 11) return "������";

		if (((minute % 10) <= 4 && (minute % 10) >= 2) && !(minute <= 14 && minute >= 12)) return "������";

		return "�����";
	}
	else if (flag == 's')
	{
		if ((second % 10) == 1 && second != 11) return "c������";

		if (((second % 10) <= 4 && (second % 10) >= 2) && !(second <= 14 && second >= 12)) return "�������";

		return "������";
	}
	else
	{
		if (hour < 12) return "����";
		if (hour == 12 && minute == 0 && second == 0) return "����";
		return "�����";
	}
}