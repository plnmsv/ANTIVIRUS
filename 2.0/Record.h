#pragma once
#include <Windows.h>
#include <iostream>

/*
	�������
	1. ����������� �����, �������������� ������ � ���� ������ ��������. ����� ������ ��������:
	� ��� ������������ ������� *
	� ����� ��������� k *
	� ��������� *
	o ������ n ������ ��������� (n <= k) - ������������������ ����, ������������� � ������� *
	o �������� ���-������ �� ���� k ������ ��������� *
	� ���������� � ���������� ��������� � ������� (���������� �������� ��������, � ������� ����� ���������� ��������� � �������):
	o ����������� �������� ������� ������� ��������� ������������ ������ �������
	o ������������ �������� ������� ������� ��������� ������������ ������ �������
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
	// ������������
	Record();
	Record(std::string name, DWORD signature, DWORD minoffset, DWORD maxoffset);

	// ����� ����������
	void printall();
};

