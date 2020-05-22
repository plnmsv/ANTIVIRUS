#pragma once
#include "Record.h"

/*
	Задание
	2. Разработать класс для хранения записей с функцией эффективного поиска(логарифмический поиск)
*/

class Base
{
	DWORD recordcount;
public:
	Record _Record;
	Base();
	Base(DWORD RecordCount);
};

