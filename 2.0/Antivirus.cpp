#include <iostream>
#include "Record.h"
#include <fstream>
#include <cstdlib>
#include "Base.h"

int userchoice(int choice)
{
    Record A("ESKETIT", 8182381, 12, 15); // Инициализация экземпляра класса
    Base AVBase = Base(1);

    switch (choice)
    {
    case 1:
        std::cout << "\nПроверка работы класса\n";
        A.printall();
        break;
    case 2:
        AVBase._Record.printall();
        break;
    case 3:
        /*
        std::cout << "Проверка файловой записи";
        out.open("C:\\AVBASE\\File.txt", std::ios::binary);
        out ? std::cout << "\nФайл открыт" : std::cout << "\nФайл не открыт";
        out.write("AVB", 3); // запись сигнатуры файла базы данных
        out.write("12", 2); // Колво записей
        std::cout << "\nВ файл записаны AVB, 12";
        out.close();*/
        break;
    case 4:
        /*
        std::cout << "Проверка файлового чтения";
        in.open("C:\\AVBASE\\File.txt", std::ios::binary);
        in ? std::cout << "\nФайл открыт\n" : std::cout << "\nФайл не открыт\n";
        in.read((char *)S, sizeof(S));
        !memcmp(&S, &"AVB", 3) ? std::cout << "Открыт наш файл" : std::cout << "Открыт не наш файл";
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

    std::cout << "Добро пожаловать в первую лабораторную по ЗИ!\n";

    while (true)
    {
        std::cin >> choice;
        userchoice(choice);
    }
}
