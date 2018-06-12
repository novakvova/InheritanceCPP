#include "Point.h"



Point::Point()
{
}
Point::Point(int x, int y)
{
	_x = x;
	_y = y;
}
ostream &operator<<(ostream & os,
	const Point & point)
{
	os << point._x << "\t" << point._y;
	return os;
}
int Point::GetX()
{
	return _x;
}
void Point::SetX(int x)
{
	_x = x;
}
int Point::GetY()
{
	return _y;
}
void Point::SetY(int y)
{
	_y = y;
}

Point::~Point()
{
}
