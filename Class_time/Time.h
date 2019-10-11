#pragma once
#include<string>
#include<iostream>

using namespace std;

/**
	Cпециальный конструктор экземпляра класса Time
	short your_hour - Часы
	short your_minute - Минуты
	short your_second - Секунды
	Поле обнуляется, если ему присвоено некорректное значение
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
	//Cпециальный конструкутор
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
	short TimeInHour();
	//Перевод времени в минуты
	//Вернёт кол-во минут в текущем времени 
	short TimeInMinute();
	//Перевод времени в секунды
	//Вернёт кол-во секунд в текущем времени 
	short TimeInSecond();


	//Пребразование времени в строку
	string TimeInString();


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


	//Вывод времени 
	void const Display();

private:
	//Строковая функция возвращающая еденицы измерения времени
	//с правильным окнчанием
	//flag h - часы
	//flag m - минуты
	//flag s - секунды
	//flag любой - Утро или Вечер
	string units(char flag);
};

