#include "ScanRegion.h"

void ScanRegion::readRegion(char* buffer, int startposition, int length)
{
	Object.readObject(startposition, length, buffer);
}
