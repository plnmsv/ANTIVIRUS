#pragma once
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

class IObjectContent
{
private:
	int filesize;
	fstream file;
public:
	IObjectContent();
	IObjectContent(string filepath);
	int getFileSize();
	void readObject(int startposition, int length, char* buffer);
};

/*
1. Разработать интерфейс IObjectContent, представляющий собой абстракцию содержимого
	для сканирования (файл, данные из сокета, запись в базе данных). Класс должен содержать:
	*	Метод получения размера содержимого
	*	Метод блочного чтения данных с заданной позиции, Метод должен возвращать количество реально прочитанных байт
*/
