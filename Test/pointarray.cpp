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
    Point *arr[3] = {   
        new Point(10, 10), new Point(20, 20), new Point(30, 30)
    };

    for(int i = 0 ; i < 3 ; i++)
    {
        cout << "arr[" << i << "] = ";
        arr[i]->Print();
        cout << "\n";
    }

    for(int i = 0 ; i < 3 ; i++)
    {
        delete arr[i];
    }

    return 0;
}