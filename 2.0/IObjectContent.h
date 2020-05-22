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
1. ����������� ��������� IObjectContent, �������������� ����� ���������� �����������
	��� ������������ (����, ������ �� ������, ������ � ���� ������). ����� ������ ���������:
	*	����� ��������� ������� �����������
	*	����� �������� ������ ������ � �������� �������, ����� ������ ���������� ���������� ������� ����������� ����
*/
