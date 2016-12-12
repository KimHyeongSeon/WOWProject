
#include <iostream>
using namespace std;

class Point 
{
public:
    enum COLOR {red, green, blue};
#ifdef INT_COORD
    typedef int CoordType;
#else
    typedef double CoordType;
#endif

protected:
    CoordType m_x, m_y;
    COLOR m_color;

public:
    void Print() const;
    void SetXY(CoordType x, CoordType y);
    void SetColor(COLOR color);
    bool IsEqual(const Point& p) const;
    Point(CoordType x = 0, CoordType y = 0, COLOR color = red);
};

void Point::Print() const
{
    cout << "(" << m_x << ", " << m_y << ")";
    cout << ", color:";
    switch(m_color)
    {
    case red:   cout << "red";    break;
    case green: cout << "green";    break;
    case blue:  cout << "biue";    break;
    }
}

void Point::SetXY(CoordType x, CoordType y)
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

Point::Point(CoordType x, CoordType y, COLOR color)
{
    m_x = x;
    m_y = y;
    m_color = color;
}

int main()
{
    cout << "x,y size : " << sizeof(Point::CoordType) << "\n";
    Point p1(1.5, 10.34, Point::blue);
    cout << "p1 = ";
    p1.Print();
    cout << "\n";

    return 0;
}
