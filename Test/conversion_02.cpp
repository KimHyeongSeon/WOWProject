#include <iostream>
using namespace std;

class String
{
protected:
    char *m_str;    
public:
    String(const char* s = NULL);  
    ~String();
    int Size();
    void Set(const char* s);
    void Print();
};

String::String(const char* s)
{
    if( s == NULL )
    {
        m_str = new char[1];
        m_str[0] = 0;  
    }
    else
    {
        m_str = new char[::strlen(s) + 1];
        ::strcpy(m_str, s);
    }
}

String::~String()
{
    delete [] m_str;
    m_str = NULL;
}

int String::Size()
{
    return ::strlen(m_str);
}

void String::Set(const char* s)
{
    delete [] m_str;

    if( s == NULL )
    {
        m_str = new char[1];
        m_str[0] = 0;  
    }
    else
    {
        m_str = new char[::strlen(s) + 1];
        ::strcpy(m_str, s);
    }
}

void String::Print()
{
    cout << m_str << "\n";
}

void Test(String s)
{
    cout << "char str : " << s.Size() << "\n";
    cout << "char content  : ";
    s.Print();
}

int main()
{
    String str1 = "abc";
    cout << "str1 = ";
    str1.Print();

    Test("Good-bye");

    return 0;
}
