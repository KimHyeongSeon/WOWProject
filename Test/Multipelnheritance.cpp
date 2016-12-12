#include <iostream>
using namespace std;

class X 
{
protected:
    int m_x;
public:
    void funcX()
    {
        cout << "X::funcX \n";
    }
};

class Y
{
protected:
    int m_y;
public:
    void funcY()
    {
        cout << "Y::funcY \n";
    }
};

class Z : public X, public Y
{
public:
    void funcZ()
    {
        m_x = 10;
        m_y = 20;
        cout << "Z::funcZ \n";
    }
};

int main()
{
    Z obj;
    obj.funcX();   
    obj.funcY();   
    obj.funcZ();   

    return 0;
}
