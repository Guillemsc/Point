#include <stdio.h>

class Point
{
public:
	float x;
	float y;
	bool IsZero();
	bool Equal(const Point&);
	bool Different(const Point&);
	Point operator-(const Point&);
	Point operator+(const Point&);
	Point SetZero();
	Point Negate();
};

bool Point::IsZero()
{
	return (x == 0 && y == 0);
}

bool Point::Equal(const Point& other_point)
{
	return (x == other_point.x && y == other_point.y);
}
bool Point::Different(const Point& other_point)
{
	return (x != other_point.x && y != other_point.y);
}

Point SetZero()
{
	Point tmp;
	tmp.x = 0;
	tmp.y = 0;
	return tmp;
}

Point Negate()
{
	Point tmp;
	tmp.x = !tmp.x;
	tmp.y = !tmp.y;
	return tmp;
}

Point Point::operator-(const Point& other_point)
{
	Point tmp;
	tmp.x = x - other_point.x;
	tmp.y = y - other_point.y;
	return tmp;
}

Point Point::operator+(const Point& other_point)
{
	Point tmp;
	tmp.x = x + other_point.x;
	tmp.y = y + other_point.y;
	return tmp;
}

int main()
{
	getchar();
	return 0;
}