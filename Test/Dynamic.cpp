
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
    Point *p1 = new Point;          
    Point *p2 = new Point(10, 20);  
    Point *p3 = new Point();        

    cout << "p1 = ";
    p1->Print();
    cout << "\n";

    cout << "p2 = ";
    p2->Print();
    cout << "\n";

    cout << "p3 = ";
    p3->Print();
    cout << "\n";

    delete p1;
    delete p2;
    delete p3;

    return 0;
}
