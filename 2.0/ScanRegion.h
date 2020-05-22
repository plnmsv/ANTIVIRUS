#pragma once
#include "IObjectContent.h"
class ScanRegion
{
private:
	int segmentsize;
	int offset;
	IObjectContent Object;
public:
	void readRegion(char* buffer, int startposition, int length);
};
/*
	2. Разработать класс ScanRegion, представляющий собой участок для сканирования.Класс должен содержать :
	* Размер сегмента
	* Смещение относительно начала контента
	* Объект IObjectContent
	* Метод блочного чтения заданного региона
*/