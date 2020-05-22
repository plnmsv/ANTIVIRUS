#include "Record.h"

// ������������ -----------------------------------------------------------------------
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

// ������� ----------------------------------------------------------------------------


// ������� ----------------------------------------------------------------------------


// ����� ������
void Record::printall()
{
	std::cout << "\t������ ���������� �� ������� ������:";
	std::cout << "\n\t��� ������:\t" << name << "\n\t���������:\t" << signature
		<< "\n\t����� ���������:\t" << signaturelength << "\n\t��� ����� ���������:\t" << checksumm
		<< "\n\tMINOFFSET\t" << minoffset << "\n\tMAXOFFSET:\t" << maxoffset << std::endl;
}