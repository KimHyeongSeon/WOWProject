#include <iostream>
using namespace std;

#include "Array.h"

int main()
{
    Array<int> array1(5);
    int data;
    cout << "NUmber : ";
    for(int i = 0 ; i < 5 ; i++ )
    {
        cin >> data;
        array1.Add(data);
    }
    cout << "index : ";
    int index;
    cin >> index;
    if( ! array1.GetAt(index, data) )
        cout << "fail.\n";
    else 
        cout << index << "? " << data << "\n";

    return 0;
}
