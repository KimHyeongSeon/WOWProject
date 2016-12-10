#include <iostream>
using namespace std;

char* NumberToString(int n);

int main()
{
    int num;
    cout << "numbers : ";
    cin >> num;

    char *str = NumberToString(num);
    cout << "char  : " << str << "\n";
    delete [] str;

    return 0;
}

char* NumberToString(int n)
{
    char *p = new char[20];
    sprintf(p, "%d", n);
    return p;
}
