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

