
#include <iostream>
using namespace std;

class String
{
protected:
    char *m_str;

public:
    String(const char* s = NULL);
    String(const String& s);
    ~String();
    int Size() const;
    void Set(const char* s);
    void Print() const;

    String operator+(const String& s) const;
    bool operator==(const String& s) const;
    bool operator!=(const String& s) const;
    String& operator=(const String& s);

    friend String operator+(const char* s1, const String& s2);
    friend ostream& operator<<(ostream& os, const String& s);

    operator const char*() const;
};

String::String(const char* s)
{
    if( s == NULL )
    {
        m_str = new char[1];
        m_str[0] = 0;   // �� ���� ����
    }
    else
    {
        m_str = new char[::strlen(s) + 1];
        ::strcpy(m_str, s);
    }
}

String::String(const String& s)    // ���� ������
{
    m_str = new char[s.Size() + 1];
    ::strcpy(m_str, s.m_str);
}

String::~String()
{
    delete [] m_str;
    m_str = NULL;
}

int String::Size() const
{
    return ::strlen(m_str);
}

void String::Set(const char* s)
{
    delete [] m_str;

    if( s == NULL )
    {
        m_str = new char[1];
        m_str[0] = 0;   // �� ���� ����
    }
    else
    {
        m_str = new char[::strlen(s) + 1];
        ::strcpy(m_str, s);
    }
}

void String::Print() const
{
    cout << m_str << "\n";
}

String String::operator+(const String& s) const
{
    char* tmp = new char[Size() + s.Size() + 1];
    ::strcpy(tmp, m_str);
    ::strcat(tmp, s.m_str);
    String result(tmp);
    delete [] tmp;
    return result;
}

bool String::operator==(const String& s) const
{
    return ::strcmp(m_str, s.m_str) == 0 ? true : false;
}

bool String::operator!=(const String& s) const
{
    return ::strcmp(m_str, s.m_str) ? true : false;
}

String& String::operator=(const String& s)
{
    if( *this == s )
        return *this;
    Set(s.m_str);
    return *this;
}

String operator+(const char* s1, const String& s2)
{
    char* tmp = new char[::strlen(s1) + s2.Size() + 1];
    ::strcpy(tmp, s1);
    ::strcat(tmp, s2.m_str);
    String result(tmp);
    delete[] tmp;
    return result;
}

ostream& operator<<(ostream& os, const String& s)
{
    os << s.m_str;
    return os;
}

String::operator const char*() const
{
    return m_str;
}

void Test(const char* s)
{
    cout << "char : " << (::strlen(s) == 0 ? "x" : s) << "\n";
}

int main()
{
    String str1;
    Test(str1);     

    str1 = "abc";  
    Test(str1);     

    const char* str2 = str1;    
    Test(str2);

    return 0;
}
