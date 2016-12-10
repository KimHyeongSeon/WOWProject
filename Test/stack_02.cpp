#include <iostream>
using namespace std;

class Stack
{
public:
    int m_size;
    int m_top;
    int *m_buffer;

    void Initialize(int size = 10);
    void RemoveAll();
    bool Push(int value);
    bool Pop(int& value);
};

void Stack::Initialize(int size)
{
    m_size = size;
    m_top = -1;
    m_buffer = new int[m_size];
    memset(m_buffer, 0, sizeof(int) * m_size);
}

void Stack::RemoveAll()
{
    m_size = 0;
    m_top = -1;
    delete[] m_buffer;
    m_buffer = NULL;
}

bool Stack::Push(int value)
{
    if( m_top >= m_size - 1 )       return false;
    m_buffer[++m_top] = value;
    return true;
}

bool Stack::Pop(int& value)
{
    if( m_top < 0 )                 return false;
    value = m_buffer[m_top--];
    return true;
}

int main()
{
    Stack s1, s2;

    s1.Initialize(5);
    s2.Initialize();

    while( s1.Push(rand() % 100) ) ;   
    cout << "s1 save data : ";
    for(int i = 0 ; i < s1.m_size ; i++ )
        cout << s1.m_buffer[i] << " ";
    cout << "\n";

    cout << "s1 data : ";
    int data;
    while( s1.Pop(data) )
        cout << data << " ";
    cout << "\n";

    while( s2.Push(rand() % 100) ) ;   
    cout << "s2 save data : ";
    for(int i = 0 ; i < s2.m_size ; i++ )
        cout << s2.m_buffer[i] << " ";
    cout << "\n";

    cout << "s2 data : ";
    while( s2.Pop(data) )
        cout << data << " ";
    cout << "\n";

    s1.RemoveAll();
    s2.RemoveAll();

    return 0;
}
