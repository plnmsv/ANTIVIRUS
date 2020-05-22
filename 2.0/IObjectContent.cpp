#include "IObjectContent.h"

using namespace std;

IObjectContent::IObjectContent(string filepath)
{
    file = fstream(filepath, ios::in);
    file.seekg(0, std::ios::end);
    filesize = file.tellg();
}

int IObjectContent::getFileSize()
{
    return filesize;
}

void IObjectContent::readObject(int startposition, int length, char* buffer)
{
    file.seekg(startposition, ios_base::beg);
    file.read(buffer, length);
}

IObjectContent::IObjectContent() {}