#pragma once
#include<iostream>
using namespace std;
class Color
{
	int _r, _g, _b;
public:
	Color();
	Color(int, int, int);
	friend ostream &operator<<(ostream &, 
		const Color &);
	~Color();
};

