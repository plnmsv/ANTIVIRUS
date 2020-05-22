#include "Record.h"

// Конструкторы -----------------------------------------------------------------------
Record::Record() {
	this->name = "";
	this->signature = NULL;
	this->signaturelength = NULL;
	this->checksumm = NULL;
	this->minoffset = NULL;
	this->maxoffset = NULL;
}

Record::Record(std::string name, DWORD signature, DWORD minoffset, DWORD maxoffset) {
	this->name = name;
	this->signature = signature;
	this->signaturelength = sizeof(signature);
	std::hash<unsigned long> hash_fn;
	size_t hash = hash_fn(signature);
	this->checksumm = hash;
	this->minoffset = minoffset;
	this->maxoffset = maxoffset;
}

// Геттеры ----------------------------------------------------------------------------


// Сеттеры ----------------------------------------------------------------------------


// Принт класса
void Record::printall()
{
	std::cout << "\tВывожу информацию об объекте записи:";
	std::cout << "\n\tИмя записи:\t" << name << "\n\tСигнатура:\t" << signature
		<< "\n\tДлина сигнатуры:\t" << signaturelength << "\n\tХэш сумма сигнатуры:\t" << checksumm
		<< "\n\tMINOFFSET\t" << minoffset << "\n\tMAXOFFSET:\t" << maxoffset << std::endl;
}