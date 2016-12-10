#include <iostream>
using namespace std;

#define ADD(x, y) x + y
#define MUL(x, y) x * y

inline int Add(int x, int y);
inline int Mul(int x, int y);

int main()
{
    cout << MUL(10 + 20, 30 + 40) << endl;
    cout << Mul(10 + 20, 30 + 40) << endl;

    cout << ADD("abc", 10) << endl;
    //	cout << Add("abc", 10) << endl;

    return 0;
}

inline int Add(int x, int y)
{
    return x + y;
}

inline int Mul(int x, int y)
{
    return x * y;
}
