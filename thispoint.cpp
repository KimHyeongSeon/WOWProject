#include <iostream>
using namespace std;

class X 
{
protected:
    int data;

public:
    void Print();
    void Set(int data);
    bool IsEqual(const X& object);
};

void X::Print()
{
    cout << "this = " << this << ", data = " << data << "\n";
}

void X::Set(int data)
{
    this->data = data;
}
bool X::IsEqual(const X& object)
{
    return (data == object.data);
}

int main()
{
    X obj1;
    obj1.Set(100);
    cout << "obj1 : ";
    obj1.Print();
    cout << "obj1 주소 : " << &obj1 << "\n";

    X obj2;
    obj2.Set(200);
    cout << "obj2 : ";
    obj2.Print();
    cout << "obj2 주소 : " << &obj2 << "\n";

    return 0;
}
