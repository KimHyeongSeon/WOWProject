#ifndef FILE_H
#define FILE_H

#include <stdio.h>
#include <string>
using namespace std;

class File 
{
public:
    enum OPEN_MODE {in, out};

protected:
    FILE *m_filePtr;   
    bool m_bOpen;
    bool m_bEOF;

public:
    File();
    File(const string& fileName, OPEN_MODE openMode=in);
    ~File(void);
    bool IsOpened(void) const;
    bool IsEOF(void) const;
    bool Open(const string& fileName, OPEN_MODE openMode);
    bool Close(void) const;
    unsigned int Read(void* buffer, unsigned int bytes);
    unsigned int Write(void* buffer, unsigned int bytes);
};

#endif
