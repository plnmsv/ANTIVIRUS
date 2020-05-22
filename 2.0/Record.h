#pragma once
#include <Windows.h>
#include <iostream>

/*
	Задание
	1. Разработать класс, представляющий запись в базе данных сигнатур. Класс должен включать:
	• Имя вредоносного объекта *
	• Длину сигнатуры k *
	• Сигнатуру *
	o Первый n байтов сигнатуры (n <= k) - последовательность байт, встречающаяся в объекте *
	o Значение хеш-фукции от всех k байтов сигнатуры *
	• Информация о размещении сигнатуры в объекте (допустимый интервал смещений, с которых может начинаться сигнатура в объекте):
	o Минимальное смещение первого символа сигнатуры относительно начала объекта
	o Максимальное смещение первого символа сигнатуры относительно начала объекта
*/

class Record
{
private:
	std::string name;
	DWORD signature;
	DWORD signaturelength;
	//DWORD signaturefirstbytes;
	DWORD checksumm;
	DWORD minoffset;
	DWORD maxoffset;
public:
	// Конструкторы
	Record();
	Record(std::string name, DWORD signature, DWORD minoffset, DWORD maxoffset);

	// Принт экземпляра
	void printall();
};

