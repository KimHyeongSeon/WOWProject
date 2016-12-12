#include <iostream>
using namespace std;

class Point 
{
public:
    enum COLOR {red, green, blue};

protected:
    int m_x, m_y;
    COLOR m_color;

public:
    void Print() const;
    void SetXY(int x, int y);
    void SetColor(COLOR color);
    bool IsEqual(const Point& p) const;
    Point(int x = 0, int y = 0, COLOR color = red);
};

void Point::Print() const
{
    cout << "(" << m_x << ", " << m_y << ")";
    cout << ", color:";
    switch(m_color)
    {
    case red:   cout << "red";    break;
    case green: cout << "green";    break;
    case blue:  cout << "blue";    break;
    }
}

void Point::SetXY(int x, int y)
{
    m_x = x;
    m_y = y;
}

void Point::SetColor(COLOR color)
{
    m_color = color;
}

bool Point::IsEqual(const Point& p) const
{
    return (m_x == p.m_x && m_y == p.m_y);
}

Point::Point(int x, int y, COLOR color)
{
    m_x = x;
    m_y = y;
    m_color = color;
}

int main()
{
    Point p1(10, 10, Point::blue);
    cout << "p1 = ";
    p1.Print();
    cout << "\n";

    Point p2;
    p2.SetXY(20, 20);
    p2.SetColor(Point::red);
    cout << "p2 = ";
    p2.Print();
    cout << "\n";

    return 0;
}
