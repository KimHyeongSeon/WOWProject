#include <iostream>
using namespace std;

class X
{
protected:
    int m_data;
    const int m_max;
    int &m_ref;
public:
    X(int data, int max);
    void Print();
};

X::X(int data, int max) : m_max(max), m_ref(m_data)
{
    m_data = data;
    //m_max = max;
    //m_ref = m_data;
}

void X::Print()
{
    cout << "data : " << m_data << ", max : " << m_max << "\n";
}

int main()
{
    X x1(10, 100);
    x1.Print();

    return 0;
}
