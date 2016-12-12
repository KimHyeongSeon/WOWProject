#include <iostream>
using namespace std;

class Point 
{
protected:
    int m_x, m_y;

public:
    void Print() const;
    void SetXY(int x, int y);
    bool IsEqual(const Point& p) const;
    Point(int x = 0, int y = 0);
};

void Point::Print() const
{
    cout << "(" << m_x << ", " << m_y << ")";
}

void Point::SetXY(int x, int y)
{
    m_x = x;
    m_y = y;
}

bool Point::IsEqual(const Point& p) const
{
    return (m_x == p.m_x && m_y == p.m_y);
}

Point::Point(int x, int y)
{
    m_x = x;
    m_y = y;
}

int main()
{
    Point arr1[3];      
    for(int i = 0 ; i < 3 ; i++)
    {
        cout << "arr1[" << i << "] = ";
        arr1[i].Print();
        cout << "\n";
    }

    Point arr2[3] = {   
        Point(10, 10), Point(20, 20), Point(30, 30)
    };
    for(int i = 0 ; i < 3 ; i++)
    {
        cout << "arr2[" << i << "] = ";
        arr2[i].Print();
        cout << "\n";
    }

    return 0;
}
