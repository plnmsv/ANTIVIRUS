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
	2. ����������� ����� ScanRegion, �������������� ����� ������� ��� ������������.����� ������ ��������� :
	* ������ ��������
	* �������� ������������ ������ ��������
	* ������ IObjectContent
	* ����� �������� ������ ��������� �������
*/