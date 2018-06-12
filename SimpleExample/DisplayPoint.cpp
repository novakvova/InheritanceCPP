#include "DisplayPoint.h"



DisplayPoint::DisplayPoint()
{
}
DisplayPoint::DisplayPoint(int x, int y, Color c)
{
	this->SetX(x > 0 ? x : 0);
	this->SetY(y > 0 ? y : 0);
	this->color = c;
}
ostream & operator<<(ostream & os,
	DisplayPoint & ps)
{
	os << ps.GetX() << "x" << ps.GetY() << "\n";
	os << ps.color;
	return os;
	
}

DisplayPoint::~DisplayPoint()
{
}
