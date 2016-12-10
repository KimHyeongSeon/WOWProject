#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    int &ref = num;

    cout << "num = " << num << endl;
    cout << "ref = " << ref << endl;

    ref = 100;

    cout << "num = " << num << endl;
    cout << "ref = " << ref << endl;

    cout << "&num = " << &num << endl;
    cout << "&ref = " << &ref << endl;

    return 0;
}
