#include "Color.h"



Color::Color()
{
}
Color::Color(int r, int g, int b)
{
	_r = r; 
	_g = g;  
	_b = b;
}
ostream & operator<<(ostream &os, const Color &c)
{
	os << "#" << c._r << c._g << c._b;
	return os;
}
Color::~Color()
{
}
