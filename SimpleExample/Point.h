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
	~Point();
	int GetX();
	int GetY();
protected:
	void SetX(int);
	void SetY(int);
};

