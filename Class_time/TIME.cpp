#include "Time.h"

//Стандартный конструктор
Time::Time() {}
//Деструктор
Time::~Time() {}
//Cпециальный конструктор экземпляра класса Time
//Поле обнуляется, если ему присвоено некорректное значение
Time::Time(TypeTime your_hour, TypeTime your_minute, TypeTime your_second)
{
	SetHour(your_hour);
	SetMinute(your_minute);
	SetSecond(your_second);
}
//Конструктор преобразования, задающий часы
Time::Time(TypeTime your_hour)
{
	SetHour(your_hour);
	minute = 0;
	second = 0;
}


//Сложение и вычитание объектов класса
Time Time::operator + (const Time& addTwo)
{
	Time Res;

	Res.hour = hour + addTwo.hour;
	Res.minute = minute + addTwo.minute;
	Res.second = second + addTwo.second;

	if (Res.second > 59)
	{
		Res.second -= 60;
		Res.minute++;
	}
	if (Res.minute > 59)
	{
		Res.minute -= 60;
		Res.hour++;
	}
	Res.hour = (Res.hour > 23) ? Res.hour - 24 : Res.hour;

	return Res;
}

Time Time::operator - (const Time& addTwo)
{
	Time Res;

	Res.hour = hour - addTwo.hour;
	Res.minute = minute - addTwo.minute;
	Res.second = second - addTwo.second;

	if (Res.second < 0)
	{
		Res.second *= -1;
		Res.minute--;
	}
	if (Res.minute < 0)
	{
		Res.minute *= -1;
		Res.hour--;
	}
	Res.hour = (Res.hour < 0) ? Res.hour * -1 : Res.hour;

	return Res;
}



//Прибавление часов к времени
void Time::AddHour(unsigned H)
{
	unsigned AddH = hour + H;

	while (AddH > 23)
		AddH -= 24;

	hour = AddH;
}

//Прибавление минут к времени
void Time::AddMinute(unsigned M)
{
	unsigned AddM = minute + M, 
		H = 0;
	while (AddM > 59)
	{
		AddM -= 60;
		H++;
	}
	minute = AddM;
	AddHour(H);
}

//Прибавление секунд к времени
void Time::AddSecond(unsigned S)
{
	unsigned AddS = second + S,
		M = 0;
	while (AddS > 59)
	{
		AddS -= 60;
		M++;
	}
	second = AddS;
	AddMinute(M);
}


//Вычитание часов из времени
void Time::SubHour(unsigned H)
{
	int SubH = hour - H;
	while (SubH < 0)
		SubH += 24;
	
	hour = SubH;
}

//Вычитание минут из времени
void Time::SubMinute(unsigned M)
{
	int SubM = minute - M,
		H = 0;
	while (SubM < 0)
	{
		SubM += 60;
		H++;
	}
	minute = SubM;
	SubHour(H);
}

//Вычитание секунд из времени
void Time::SubSecond(unsigned S)
{
	int SubS = second - S,
		M = 0;
	while (SubS < 0)
	{
		SubS += 60;
		M++;
	}
	second = SubS;
	SubMinute(M);
}



//Перевод времени в часы
//Вернёт кол-во часов в текущем времени 
float Time::TimeInHour()
{
	return hour + (minute / 60.0);
}

//Перевод времени в минуты
//Вернёт кол-во минут в текущем времени 
float Time::TimeInMinute()
{
	return (hour * 60) + minute + (second / 60.0);
}

//Перевод времени в секунды
//Вернёт кол-во секунд в текущем времени 
float Time::TimeInSecond()
{
	return (hour * 3600.0) + (minute * 60) + second;
}



//Пребразование времени в строку
string Time::TimeInString()
{
	string TimeString = to_string(hour) + ":" + 
		to_string(minute) + ":" + 
		to_string(second);

	return TimeString;
}

//Пребразование времени в строку
//Перегрузка метода: с выводом половины дня
//flaf - 'd'
string Time::TimeInString(char flag)
{
	string TimeString = to_string(hour) + ":" +
		to_string(minute) + ":" +
		to_string(second) + "  " +
		units('d');

	return TimeString;
}

//Пребразование времени в строку
//Перегрузка метода: с выводом едениц времени
//flag - 'hms'
string Time::TimeInString(string flag)
{
	string TimeString = to_string(hour) + " " + units('h') + "\n" +
		to_string(minute) + " " + units('m') + "\n" +
		to_string(second) + " " + units('s');

	return TimeString;
}

//Пребразование времени в строку
//Перегрузка метода: с выводом едениц времени
//Перегрузка метода: с выводом половины дня
//flag - 'hms'
//flag2 - 'd'
string Time::TimeInString(string flag, char flag2)
{
	string TimeString = to_string(hour) + " " + units('h') + "\n" +
		to_string(minute) + " " + units('m') + "\n" +
		to_string(second) + " " + units('s') + "\n" + 
		units('d');

	return TimeString;
}

//Преобразовать строку созданную методом TimeInString() в число
void Time::StringToTime(string strTime)
{
	string strTime1 = "";
	int flag = 0;

	for (int i = 0; i < strTime.length(); i++)
	{
		strTime1 += strTime[1];
		if (strTime[i] == ':' || i == strTime.length() - 1)
		{
			switch (flag)
			{
			case 0:
			{
				SetHour(stoi(strTime1));
			} break;

			case 1:
			{
				SetMinute(stoi(strTime1));
			} break;

			case 2:
			{
				SetSecond(stoi(strTime1));
			} break;
			}
			flag++;
			strTime1 = "";
		}
	}
}


//Вернуть значение поля часов
unsigned Time::GetHour()
{
	return hour;
}

//Вернуть значение поля минут
unsigned Time::GetMinute()
{
	return minute;
}

//Вернуть значение поля секунд
unsigned Time::GetSecond()
{
	return second;
}



//Изменить поле часов
void Time::SetHour(TypeTime H)
{
	hour = (H <= 23 && H >= 0) ? H : 0;
}

//Изменить поле минут
void Time::SetMinute(TypeTime M)
{
	minute = (M <= 59 && M >= 0) ? M : 0;
}

//Изменить поле секуд
void Time::SetSecond(TypeTime S)
{
	second = (S <= 59 && S >= 0) ? S : 0 ;
}



//Операторы сравнения
bool Time::operator == (const Time& SecondOperand)
{
	return ((hour == SecondOperand.hour) &&
		(minute == SecondOperand.minute) &&
		(second == SecondOperand.second))
		? true : false;
}

bool Time::operator != (const Time& SecondOperand)
{
	Time FirstOperator(hour, minute, second);
	return !(FirstOperator == SecondOperand);
}

bool Time::operator > (const Time& SecondOperand)
{
	if (hour > SecondOperand.hour) return true;

	if (hour == SecondOperand.hour)
	{
		if (minute > SecondOperand.minute) return true;
		if ((minute == SecondOperand.minute) && (second > SecondOperand.second))
			return true;
	}
	return false;
}

bool Time::operator < (const Time& SecondOperand)
{
	Time FirstOperator(hour, minute, second);
	return !(FirstOperator > SecondOperand) && !(FirstOperator == SecondOperand);
}

bool Time::operator <= (const Time& SecondOperand)
{
	Time FirstOperator(hour, minute, second);
	return ((FirstOperator == SecondOperand) || (FirstOperator < SecondOperand));
}

bool Time::operator >= (const Time& SecondOperand)
{
	Time FirstOperator(hour, minute, second);
	return ((FirstOperator == SecondOperand) || (FirstOperator > SecondOperand));
}


///////////////////////////////////////////////////////////////////////////////////
//private

//Строковая функция возвращающая еденицы измерения времени
//с правильным окнчанием, исп. в методе перевода времени в строку
//flag h - часы
//flag m - минуты
//flag s - секунды
//flag любой - Утро или Вечер
string Time::units(char flag)
{
	if (flag == 'h')
	{
		if (hour == 1 || hour - 20 == 1) return "час";

		if ((hour % 20) == 2 || (hour % 20) == 3 || (hour % 20) == 4 ||
			hour == 2 || hour == 3 || hour == 4) return "часа";

		return "часов";
	}
	else if (flag == 'm')
	{
		if ((minute % 10) == 1 && minute != 11) return "минута";

		if (((minute % 10) <= 4 && (minute % 10) >= 2) && !(minute <= 14 && minute >= 12)) return "минуты";

		return "минут";
	}
	else if (flag == 's')
	{
		if ((second % 10) == 1 && second != 11) return "cекунда";

		if (((second % 10) <= 4 && (second % 10) >= 2) && !(second <= 14 && second >= 12)) return "секунды";

		return "секунд";
	}
	else 
	{
		if (hour < 12) return "Первая половина дня";
		if (hour == 12 && minute == 0 && second == 0) return "Первая половина дня";
		return "Вторая половина дня";
	}
}