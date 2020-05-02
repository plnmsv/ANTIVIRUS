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
    ofstream out(Fname, ios::binary);            //������ ����� "�������� ����"

    while (true)
    {
        cout << "������������! ��� ������ � �����������, �������� ��������� �������:\n"
            "\t1. ������ �������� ����\n"
            "\t2. ���������� ������ � ����\n"
            "\t3. ��������� ������ ����������\n";

        cin >> choice;
        switch (choice)
        {
        case 1:
            in.read((char*)&B, sizeof(Record));          //������� ������ �� ����� � "�"
            in.close();
            cout << B.getName() << "\n\n";
            break;
        case 2:
            cout << "\n������� ��� ������: "; cin >> name;
            cout << "\n������� ������ ��������� ��������: "; cin >> offsetStart;
            cout << "\n������� ����� ��������� ��������: "; cin >> offsetEnd;
            cout << "\n������� �����: "; cin >> lenght;
            cout << "\n������� ������ �����: "; cin >> firstBytes;
            cout << "\n������� ���: "; cin >> hash;
            A.AVRecord(name, offsetStart, offsetEnd, lenght, firstBytes, hash, fileType);
            /*������ � �������� ������*/
            out.write((char*)&A, sizeof(A));        //���������� � ���� ���������
            out.close();                                 //��������� ����
            /*����� ������ � �������� ������*/
            break;
        }
    }
}
/*
    ������ ������ � ������
    ifstream in(FName, ios::binary);
    in.read((char*)&obj2, sizeof(MyClass));          //������� ������ �� ����� � "�"
    in.close();
    ����� ������ � ������
    cout << obj2.get_x() << '\n' << obj2.get_y() << '\n';
}*/