#include "Time.h"

//Стандартный конструктор
Time::Time() {}
//Деструктор
Time::~Time() {}
//Cпециальный конструктор экземпляра класса Time
//short your_hour - Часы
//short your_minute - Минуты
//short your_second - Секунды
//Поле обнуляется, если ему присвоено некорректное значение
Time::Time(short your_hour, short your_minute, short your_second)
{
	hour = (your_hour <= 23 && your_hour >= 0) ? your_hour : 0;
	minute = (your_minute <= 59 && your_minute >= 0) ? your_minute : 0;
	second = (your_second <= 59 && your_second >= 0) ? your_second : 0;
}


//Сложение двух экземпляров класса Time
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

//Вычитание двух экземпляров класса Time
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
	hour += H;
	while (hour > 23)
	{
		hour -= 24;
	}
}

//Прибавление минут к времени
void Time::AddMinute(unsigned M)
{
	minute += M;
	while (minute > 59)
	{
		minute -= 60;
		hour++;
	}
	AddHour(0);
}

//Прибавление секунд к времени
void Time::AddSecond(unsigned S)
{
	second += S;
	while (second > 59)
	{
		second -= 60;
		minute++;
	}
	AddMinute(0);
}



//Вычитание часов из времени
void Time::SubHour(unsigned H)
{
	hour -= H;
	while (hour < 0)
	{
		hour += 24;
	}
}

//Вычитание минут из времени
void Time::SubMinute(unsigned M)
{
	minute -= M;
	while (minute < 0)
	{
		minute += 60;
		hour--;
	}
	SubHour(0);
}

//Вычитание секунд из времени
void Time::SubSecond(unsigned S)
{
	second -= S;
	while (second < 0)
	{
		second += 60;
		minute--;
	}
	SubMinute(0);
}



//Перевод времени в часы
//Вернёт кол-во часов в текущем времени 
float Time::TimeInHour()
{
	float H = hour + (minute / 60.0);
	return H;
}

//Перевод времени в минуты
//Вернёт кол-во минут в текущем времени 
float Time::TimeInMinute()
{
	float M = (hour * 60) + minute + (second / 60.0);
	return M;
}

//Перевод времени в секунды
//Вернёт кол-во секунд в текущем времени 
float Time::TimeInSecond()
{
	float S = (hour * 3600) + (minute * 60) + second;
	return S;
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



//Вернуть значение поля часов
short Time::GetHour()
{
	return hour;
}

//Вернуть значение поля минут
short Time::GetMinute()
{
	return minute;
}

//Вернуть значение поля секунд
short Time::GetSecond()
{
	return second;
}



//Изменить поле часов
void Time::SetHour(short H)
{
	hour = (H <= 23 && H >= 0) ? H : 0;
}

//Изменить поле минут
void Time::SetMinute(short M)
{
	minute = (M <= 59 && M >= 0) ? M : 0;
}

//Изменить поле секуд
void Time::SetSecond(short S)
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
//с правильным окнчанием, исп. в меьтоде вывода
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