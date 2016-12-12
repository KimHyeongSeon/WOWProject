#include "TextFile.h"

TextFile::TextFile(void)
{
}

TextFile::~TextFile(void)
{
}

TextFile::TextFile(const string& fileName, OPEN_MODE openMode)
: File(fileName, openMode)
{
}

bool TextFile::Open(const string& fileName, OPEN_MODE openMode)
{
    char* mode = NULL;
    switch( openMode )
    {
    case in:    mode = "rt";    break;
    case out:   mode = "wt";    break;
    }
    m_filePtr = fopen(fileName.c_str(), mode);
    if(m_filePtr == NULL)
        m_bOpen = false;
    else
        m_bOpen = true;
    m_bEOF = false;
    return m_bOpen;
}

bool TextFile::ReadString(string& s)
{
    char str[256];
    if( fgets(str, 256, m_filePtr) == NULL )
    {
        m_bEOF = feof(m_filePtr) ? true : false;
        return false;
    }
    s = str;
    s.erase(s.size() - 1, 1);
    m_str = s;
    return true;
}

bool TextFile::WriteString(const string & s)
{
    if( fputs(s.c_str(), m_filePtr) == EOF )
    {
        m_bEOF = true;
        return false;
    }
    fputs("\n", m_filePtr);
    m_str = s;
    return true;
}

string TextFile::GetLastString() const
{
    return m_str;
}
