#include <iostream>
#include "Record.h"
#include <fstream>
#include <cstdlib>
#include "Base.h"

int userchoice(int choice)
{
    Record A("ESKETIT", 8182381, 12, 15); // ������������� ���������� ������
    Base AVBase = Base(1);

    switch (choice)
    {
    case 1:
        std::cout << "\n�������� ������ ������\n";
        A.printall();
        break;
    case 2:
        AVBase._Record.printall();
        break;
    case 3:
        /*
        std::cout << "�������� �������� ������";
        out.open("C:\\AVBASE\\File.txt", std::ios::binary);
        out ? std::cout << "\n���� ������" : std::cout << "\n���� �� ������";
        out.write("AVB", 3); // ������ ��������� ����� ���� ������
        out.write("12", 2); // ����� �������
        std::cout << "\n� ���� �������� AVB, 12";
        out.close();*/
        break;
    case 4:
        /*
        std::cout << "�������� ��������� ������";
        in.open("C:\\AVBASE\\File.txt", std::ios::binary);
        in ? std::cout << "\n���� ������\n" : std::cout << "\n���� �� ������\n";
        in.read((char *)S, sizeof(S));
        !memcmp(&S, &"AVB", 3) ? std::cout << "������ ��� ����" : std::cout << "������ �� ��� ����";
        in.read((char*)S, sizeof(S));
        std::cout << *S;
        in.close();*/
        break;
    }
    return 0;
}


int main()
{
    setlocale(LC_ALL, "rus");
    int choice;

    std::cout << "����� ���������� � ������ ������������ �� ��!\n";

    while (true)
    {
        std::cin >> choice;
        userchoice(choice);
    }
}
