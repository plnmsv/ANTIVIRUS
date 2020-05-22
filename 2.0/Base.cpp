#include "Base.h"


Base::Base()
{
	this->recordcount = 0;
}

Base::Base(DWORD RecordCount) {
	this->recordcount = RecordCount;
	this->_Record = *(new Record[this->recordcount]);
}