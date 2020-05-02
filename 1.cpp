#include <iostream>
#include <fstream>
using namespace std;

class Record {
private:
    string name;
    unsigned int offsetStart;
    unsigned int offsetEnd;
    unsigned int lenght;
    unsigned char firstBytes;
    unsigned char hash;
    string fileType;
public:
    void AVRecord(string name, unsigned int offsetStart, unsigned int offsetEnd,
        unsigned int lenght, unsigned char firstBytes, unsigned char hash, string fileType) {
        this->name = name;
        this->offsetStart = offsetStart;
        this->offsetEnd = offsetEnd;
        this->lenght = lenght;
        this->firstBytes = firstBytes;
        this->hash = hash;
        this->fileType = fileType;
    }
    string getName() { return name; }
    unsigned int getoffsetStart() { return offsetStart; }
    unsigned int getoffsetEnd() { return offsetEnd; }
    unsigned int getlenght() { return lenght; }
    unsigned char getfirstBytes() { return firstBytes; }
    unsigned char gethash() { return hash; }

};

int main()
{
    int choice;
    setlocale(LC_ALL, "rus");
    const char* Fname = "C:\\avbase\\test.txt";

    Record A, B;
    string name;
    unsigned int offsetStart;
    unsigned int offsetEnd;
    unsigned int lenght;
    unsigned char firstBytes;
    unsigned char hash;
    string fileType;

    ifstream in(Fname, ios::binary);
    ofstream out(Fname, ios::binary);            //Ставим режим "бинарный файл"

    while (true)
    {
        cout << "Здравствуйте! Для работы с антивирусом, выберите требуемую функцию:\n"
            "\t1. Чтение вирусной базы\n"
            "\t2. Добавление записи в базу\n"
            "\t3. Остановка работы антивируса\n";

        cin >> choice;
        switch (choice)
        {
        case 1:
            in.read((char*)&B, sizeof(Record));          //перенос байтов из файла в "х"
            in.close();
            cout << B.getName() << "\n\n";
            break;
        case 2:
            cout << "\nУкажите имя вируса: "; cin >> name;
            cout << "\nУкажите начало диапазона смещения: "; cin >> offsetStart;
            cout << "\nУкажите конец диапазона смещения: "; cin >> offsetEnd;
            cout << "\nУкажите длину: "; cin >> lenght;
            cout << "\nУкажите первые байты: "; cin >> firstBytes;
            cout << "\nУкажите хэш: "; cin >> hash;
            A.AVRecord(name, offsetStart, offsetEnd, lenght, firstBytes, hash, fileType);
            /*РАБОТА С БИНАРНЫМ ФАЙЛОМ*/
            out.write((char*)&A, sizeof(A));        //Записываем в файл экземпляр
            out.close();                                 //Сохраняем файл
            /*КОНЕЦ РАБОТЫ С БИНАРНЫМ ФАЙЛОМ*/
            break;
        }
    }
}
/*
    НАЧАЛО РАБОТЫ С ФАЙЛОМ
    ifstream in(FName, ios::binary);
    in.read((char*)&obj2, sizeof(MyClass));          //перенос байтов из файла в "х"
    in.close();
    КОНЕЦ РАБОТЫ С ФАЙЛОМ
    cout << obj2.get_x() << '\n' << obj2.get_y() << '\n';
}*/