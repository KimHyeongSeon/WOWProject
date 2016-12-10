#include <iostream>
using namespace std;

int main()
{
    int num = 10;
    int &ref = num;

    cout << "num : " << sizeof(num) << endl;
    cout << "ref : " << sizeof(ref) << endl;

    cout << "char&    : " << sizeof(char&)   << endl;
    cout << "short&   : " << sizeof(short&)  << endl;
    cout << "int&     : " << sizeof(int&)    << endl;
    cout << "double&  : " << sizeof(double&) << endl;

    return 0;
}
