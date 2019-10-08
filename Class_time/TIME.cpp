#include<iostream>
#include<string>

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
	//������������
	class Time(short your_hour, short your_minute, short your_second)
	{
		hour = (your_hour <= 23 && your_hour >= 0) ? your_hour : 0;
		minute = (your_minute <= 59 && your_minute >= 0) ? your_minute : 0;
		second = (your_second <= 59 && your_second >= 0) ? your_second : 0;
	}

	//�������� ���� ����������� ������ Time
	class Time AddTime(Time addOne, Time addTwo)
	{
		Time resultAdd = Time(0, 0, 0);
		resultAdd.hour = addOne.hour + addTwo.hour;
		resultAdd.minute = addOne.minute + addTwo.minute;
		resultAdd.second = addOne.second + addTwo.second;

		if (resultAdd.second >= 60)
		{
			resultAdd.minute++;
			resultAdd.second -= 60;
		}
		if (resultAdd.minute >= 60)
		{
			resultAdd.hour++;
			resultAdd.minute -= 60;
		}
		resultAdd.hour = (resultAdd.hour >= 24) ? resultAdd.hour - 24 : resultAdd.hour;

		return resultAdd;
	}

	//����� ������� 
	void Display()
	{
		cout << hour << " " << units('h') << endl;
		cout << minute << " " << units('m') << endl;
		cout << second << " " << units('s') << endl;
		cout << hour << " : " << minute << " : " << second << " - " << units('a') << endl;
	}

private:
	//��������� ������� ������������ ������� ��������� �������
	//� ���������� ���������
	//flag h - ����
	//flag m - ������
	//flag s - �������
	//flag ����� - ���� ��� �����
	string units(char flag)
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

			if (((minute % 10) <= 4 && (minute % 10) >=2) && !(minute <= 14 && minute >= 12)) return "������";

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
};

void main()
{
	setlocale(0, "");

	Time halfPastSix = Time(1, 31, 11);
	halfPastSix.Display();
	Time halfPastSeven = Time(6, 32, 21);
	halfPastSeven.Display();
	Time Summ = Summ.AddTime(halfPastSix, halfPastSeven);
	Summ.Display();

	system("pause");
}