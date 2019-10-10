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
	Time AddTime(const Time addOne, const Time addTwo);
	//Вычитание двух экземпляров класса Time
	Time SubTime(const Time addOne, const Time addTwo);


	//Прибавление часов к времени
	void AddHour(int H);
	//Прибавление минут к времени
	void AddMinute(int M);
	//Прибавление секунд к времени
	void AddSecond(int S);

	
	//Вычитание часов из времени
	void SubHour(int H);
	//Вычитание минут из времени
	void SubMinute(int M);
	//Вычитание секунд из времени
	void SubSecond(int S);


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


	//Вернуть текущее кол-во часов
	short RetHour();
	//Вернуть текущее кол-во минут
	short RetMinute();
	//Вернуть текущее кол-во секунд
	short RetSecond();


	//Изменить поле часов
	void ChangeHour(short H);
	//Изменить поле минут
	void ChangeMinute(short M);
	//Изменить поле секуд
	void ChangeSecond(short S);


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

