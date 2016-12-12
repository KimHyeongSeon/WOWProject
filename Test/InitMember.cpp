#include <iostream>
#include <math.h>
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

    friend class Line;
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

class Line
{
protected:
    Point m_begin, m_end;
public:
    void Print() const;
    void Set(const Point& begin, const Point& end);
    double GetLength() const;
    Line();     
    Line(int x1, int y1, int x2, int y2);
};

void Line::Print() const
{
    m_begin.Print();
    cout << " -- ";
    m_end.Print();
    cout << "\n";
}

void Line::Set(const Point& begin, const Point& end)
{
    m_begin = begin;
    m_end = end;
}

double Line::GetLength() const
{
    double x = m_end.m_x - m_begin.m_x;
    double y = m_end.m_y - m_begin.m_x;
    return sqrt(x * x + y * y);
}

Line::Line()    
{
}

Line::Line(int x1, int y1, int x2, int y2)
: m_begin(x1, y1), m_end(x2, y2)
{
}

int main()
{
    Line line1(10, 10, 40, 50);
    cout << "line1 : ";
    line1.Print();
    cout << "line1 str : " << line1.GetLength() << "\n";

    return 0;
}
