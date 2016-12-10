#include <iostream>
using namespace std;

struct POINT 
{
    int x;
    int y;
};

bool IsEqual(const POINT* p1, const POINT* p2);

int main()
{
    POINT p1 = {10, 10};
    POINT p2 = {20, 20};
    POINT p3 = p1;

    if( IsEqual(&p1, &p2) )
        cout << "p1 = p2 \n";
    else
        cout << "p1 =/ p2\n";

    if( IsEqual(&p1, &p3) )
        cout << "p1 = p3\n";
    else
        cout << "p1 =/ p3\n";

    return 0;
}

bool IsEqual(const POINT* p1, const POINT* p2)
{
    if( ( p1->x == p2->x ) && ( p1->y == p2->y ) )
        return true;
    return false;
}
