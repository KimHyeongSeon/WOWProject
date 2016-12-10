#include <iostream>
using namespace std;

inline int Add(int x, int y);

int main()
{
    int a, b;
    cout << "two numbers : ";
    cin >> a >> b;
    cout << "a + b = " << Add(a, b) << endl;

    return 0;
}

inline int Add(int x, int y)
{
    return x + y;
}
