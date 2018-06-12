#pragma once
#include"Point.h";
#include"Color.h";
class DisplayPoint : public Point
{
	Color color;
public:
	DisplayPoint();
	DisplayPoint(int, int, Color);
	friend ostream& operator<<(ostream &,
		DisplayPoint &);
	
	~DisplayPoint();
};

