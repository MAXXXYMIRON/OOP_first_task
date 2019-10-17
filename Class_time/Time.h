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
	//Cпециальный конструктор экземпляра класса Time
	//Поле обнуляется, если ему присвоено некорректное значение
	Time(TypeTime your_hour, TypeTime your_minute, TypeTime your_second);
	//Коструткор преобразования задающий время в часах
	Time(TypeTime your_hour);


	//Сложение двух экземпляров класса Time
	Time operator + (const Time& addTwo);
	//Вычитание двух экземпляров класса Time
	Time operator - (const Time& addTwo);


	//Прибавление часов к времени
	void AddHour(unsigned H);
	//Прибавление минут к времени
	void AddMinute(unsigned M);
	//Прибавление секунд к времени
	void AddSecond(unsigned S);

	
	//Вычитание часов из времени
	void SubHour(unsigned H);
	//Вычитание минут из времени
	void SubMinute(unsigned M);
	//Вычитание секунд из времени
	void SubSecond(unsigned S);


	//Перевод времени в часы
	//Вернёт кол-во часов в текущем времени 
	float TimeInHour();
	//Перевод времени в минуты
	//Вернёт кол-во минут в текущем времени 
	float TimeInMinute();
	//Перевод времени в секунды
	//Вернёт кол-во секунд в текущем времени 
	float TimeInSecond();


	//Пребразование времени в строку
	string TimeInString();
	//Пребразование времени в строку
	//Перегрузка метода: с выводом половины дня
	//flag - 'd'
	string TimeInString(char flag);
	//Пребразование времени в строку
	//Перегрузка метода: с выводом едениц времени
	//flag - 'hms'
	string TimeInString(string flag);
	//Пребразование времени в строку
	//Перегрузка метода: с выводом едениц времени и половины дня
	//flag - 'hms'
	//flag2 - 'd'
	string TimeInString(string flag, char flag2);
	//Преобразовать строку созданную методом TimeInString() в число
	void StringToTime(string strTime);
	



	//Вернуть значение поля часов
	unsigned GetHour();
	//Вернуть значение поля минут
	unsigned GetMinute();
	//Вернуть значение поля секунд
	unsigned GetSecond();


	//Изменить поле часов
	void SetHour(TypeTime H);
	//Изменить поле минут
	void SetMinute(TypeTime M);
	//Изменить поле секуд
	void SetSecond(TypeTime S);

	
	//Операторы сравнения
	bool operator == (const Time& SecondOperand);
	bool operator != (const Time& SecondOperand);
	bool operator > (const Time& SecondOperand);
	bool operator < (const Time& SecondOperand);
	bool operator <= (const Time& SecondOperand);
	bool operator >= (const Time& SecondOperand);

private:
	//Строковая функция возвращающая еденицы измерения времени
	//с правильным окнчанием
	//flag h - часы
	//flag m - минуты
	//flag s - секунды
	//flag любой - Утро или Вечер
	string units(char flag);
};

