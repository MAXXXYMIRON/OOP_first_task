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
	//Cпециальный конструктор экземпляра класса Time
	//short your_hour - Часы
	//short your_minute - Минуты
	//short your_second - Секунды
	//Поле обнуляется, если ему присвоено некорректное значение
	Time(short your_hour, short your_minute, short your_second);


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
	//Перегрузка метода: с выводом едениц времени
	//Перегрузка метода: с выводом половины дня
	//flag - 'hms'
	//flag2 - 'd'
	string TimeInString(string flag, char flag2);



	//Вернуть значение поля часов
	short GetHour();
	//Вернуть значение поля минут
	short GetMinute();
	//Вернуть значение поля секунд
	short GetSecond();


	//Изменить поле часов
	void SetHour(short H);
	//Изменить поле минут
	void SetMinute(short M);
	//Изменить поле секуд
	void SetSecond(short S);

	
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

