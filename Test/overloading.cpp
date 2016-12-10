#include <iostream>
using namespace std;

int GetSum(int x, int y);
double GetSum(double x, double y, double z);
int GetSum(const int arr[], int size);

int main()
{
    int a, b;
    cout << "two numbers : ";
    cin >> a >> b;
    cout << a << " + " << b << " = " << GetSum(a, b) << endl;

    double c, d, e;
    cout << "three numbers: ";
    cin >> c >> d >> e;
    cout << c << " + " << d << " + " << e << " = " << GetSum(c, d, e) << endl;

    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "array add = " << GetSum(arr, n) << endl;
    return 0;
}

int GetSum(int x, int y)
{
    return x + y;
}

double GetSum(double x, double y, double z)
{
    return x + y + z;
}

int GetSum(const int arr[], int size)
{
    int sum = 0;
    for(int i = 0 ; i < size ; i++)
        sum += arr[i];
    return sum;
}
