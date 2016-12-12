#ifndef TEXTFILE_H
#define TEXTFILE_H

#include "File.h"

class TextFile : public File
{
protected:
    string m_str;

public:
    TextFile(void);
    ~TextFile(void);
    TextFile(const string& fileName, OPEN_MODE openMode=in);
    bool Open(const string& fileName, OPEN_MODE openMode);
    bool ReadString(string& s);
    bool WriteString(const string & s);
    string GetLastString() const;
};

#endif
