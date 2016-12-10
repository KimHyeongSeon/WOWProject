#include <iostream>
using namespace std;

typedef int BOOL;
#define	TRUE	1
#define	FALSE	0

BOOL IsLeapYear(int year);

int main()
{
    int num;

    cout << "Year : ";
    cin >> num;

    if( IsLeapYear(num) )
        cout << num << "\n";
    else 
        cout << num << "\n";

    return 0;
}

BOOL IsLeapYear(int year)
{
    if( ( ( year % 4 == 0 ) && ( year % 100 != 0) ) ||
        ( year % 400 == 0 ) )
        return TRUE;
    return FALSE;
}
