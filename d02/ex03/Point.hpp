#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <ostream>
#include <string>
#include <cmath>
#include "Fixed.hpp"

class Point{
private:
	const Fixed _x;
	const Fixed _y;

public:
	Point(void);
	~Point(void);
	Point(const Point& p);
	Point(const float x, const float y);
	Point& operator=(Point const &p);
	Fixed getX(void) const;
	Fixed getY(void) const;
};

std::ostream& operator<<(std::ostream& os, Point const &f);
bool bsp(Point const &a, Point const &b, Point const &c, Point const &point);

int a = 10;

int* p = &a;

int& t = a;


#endif
