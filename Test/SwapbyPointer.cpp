#include <iostream>
using namespace std;

void Swap(int *x, int *y);

int main()
{
    int a, b;

    cout << "Two numbers : ";
    cin >> a >> b;
    cout << "Swap before a = " << a << ", b = " << b << endl;

    Swap(&a , &b);
    cout << "Swap after  a = " << a << ", b = " << b << endl;
    return 0;
}

void Swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
