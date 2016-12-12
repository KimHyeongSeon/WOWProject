#include <iostream>
using namespace std;

#include "File.h"

File::File()
{
    m_filePtr = NULL;
    m_bOpen = false;
    m_bEOF = false;
}

File::File(const string& fileName, OPEN_MODE openMode)
{
    Open(fileName, openMode);
}

File::~File(void)
{
    Close();
}

bool File::IsOpened(void) const
{
    return m_bOpen;
}

bool File::IsEOF(void) const
{
    return m_bEOF;
}

bool File::Open(const string& fileName, OPEN_MODE openMode)
{
    char* mode = NULL;
    switch( openMode )
    {
    case in:    mode = "rb";    break;
    case out:   mode = "wb";    break;
    }
    m_filePtr = fopen(fileName.c_str(), mode);
    if(m_filePtr == NULL)
        m_bOpen = false;
    else
        m_bOpen = true;
    m_bEOF = false;
    return m_bOpen;
}

bool File::Close(void) const
{
    if(m_bOpen)
        return fclose(m_filePtr) == 0 ? true : false;
    else 
        return false;
}

unsigned int File::Read(void* buffer, unsigned int bytes)
{
    if( m_bOpen )
    {
        unsigned int bytesRead = fread(buffer, 1, bytes, m_filePtr);
        m_bEOF = feof(m_filePtr) ? true : false;
        return bytesRead;
    }
    else
        return 0;
}

unsigned int File::Write(void* buffer, unsigned int bytes)
{
    if( m_bOpen )
    {
        unsigned int bytesWritten = fwrite(buffer, 1, bytes, m_filePtr);
        return bytesWritten;
    }
    else
        return 0;
}
