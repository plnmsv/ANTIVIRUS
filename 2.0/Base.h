#pragma once
#include "Record.h"

/*
	�������
	2. ����������� ����� ��� �������� ������� � �������� ������������ ������(��������������� �����)
*/

class Base
{
	DWORD recordcount;
public:
	Record _Record;
	Base();
	Base(DWORD RecordCount);
};

