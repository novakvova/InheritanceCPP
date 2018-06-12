#pragma once
#include<iostream>
using namespace std;
class Point
{
private:
	int _x;
	int _y;
public:
	Point();
	Point(int, int);
	friend ostream &operator<<(ostream &,
		const Point &);
	int GetX();
	void SetX(int);
	int GetY();
	void SetY(int);
	~Point();
};

