#include "Time.h"

//Стандартный конструктор
Time::Time() {}
//Деструктор
Time::~Time() {}
//Cпециальный конструкутор
Time::Time(short your_hour, short your_minute, short your_second)
{
	hour = (your_hour <= 23 && your_hour >= 0) ? your_hour : 0;
	minute = (your_minute <= 59 && your_minute >= 0) ? your_minute : 0;
	second = (your_second <= 59 && your_second >= 0) ? your_second : 0;
}


//Сложение двух экземпляров класса Time
Time Time::AddTime(const Time addOne, const Time addTwo)
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

//Вычитание двух экземпляров класса Time
Time Time::SubTime(const Time addOne, const Time addTwo)
{

}



//Прибавление часов к времени
void Time::AddHour(int H)
{

}

//Прибавление минут к времени
void Time::AddMinute(int M)
{

}

//Прибавление секунд к времени
void Time::AddSecond(int S)
{

}



//Вычитание часов из времени
void Time::SubHour(int H)
{

}

//Вычитание минут из времени
void Time::SubMinute(int M)
{

}

//Вычитание секунд из времени
void Time::SubSecond(int S)
{

}



//Перевод времени в часы
//Вернёт кол-во часов в текущем времени 
short Time::TimeInHour()
{

}

//Перевод времени в минуты
//Вернёт кол-во минут в текущем времени 
short Time::TimeInMinute()
{

}

//Перевод времени в секунды
//Вернёт кол-во секунд в текущем времени 
short Time::TimeInSecond()
{

}



//Пребразование времени в строку
string Time::TimeInString()
{

}



//Вернуть текущее кол-во часов
short Time::RetHour()
{

}

//Вернуть текущее кол-во минут
short Time::RetMinute()
{

}

//Вернуть текущее кол-во секунд
short Time::RetSecond()
{

}



//Изменить поле часов
void Time::ChangeHour(short H)
{

}

//Изменить поле минут
void Time::ChangeMinute(short M)
{

}

//Изменить поле секуд
void Time::ChangeSecond(short S)
{

}



//Вывод времени
void const Time::Display()
{
	cout << hour << " " << units('h') << endl;
	cout << minute << " " << units('m') << endl;
	cout << second << " " << units('s') << endl;
	cout << hour << " : " << minute << " : " << second << " - " << units('a') << endl;
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
		if (hour < 12) return "Утро";
		if (hour == 12 && minute == 0 && second == 0) return "Утро";
		return "Вечер";
	}
}