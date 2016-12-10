#include <iostream>
using namespace std;

int data = 10;	
void Func()
{
    cout << " Func\n";
}

namespace X {
    int data = 20;
    void Func()
    {
        cout << "X::Func \n";
    }
}

int main()
{
    using namespace X;

    int data = 30;
    cout << "data = " << data << "\n";		
    cout << "data = " << X::data << "\n";
    cout << "data = " << ::data << "\n";

    X::Func();
    ::Func();

    return 0;
}
