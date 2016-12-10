#include <iostream>
using namespace std;

class A {
public:
    virtual void f1()
    {   cout << "A::f1\n";  }
    virtual void f2()
    {   cout << "A::f2\n";  }
    void f3()
    {   cout << "A::f3\n";  }
};

class B : public A {
public:
    virtual void f2()
    {   cout << "B::f2\n";  }
    void f3()
    {   cout << "B::f3\n";  }
    virtual void f4()
    {   cout << "B::f4\n";  }
};

int main()
{
    A *pA = new A;
    pA->f1();       
    pA->f2();       
    pA->f3();      
    delete pA;

    pA = new B;
    pA->f1();       
    pA->f2();       
    pA->f3();      
        

    return 0;
}
