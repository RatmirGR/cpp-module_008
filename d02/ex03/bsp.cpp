#include "Point.hpp"

bool bsp(Point const &p1, Point const &p2, Point const &p3, Point const &p){
	Fixed a = (p1.getX() - p.getX())
			  * (p2.getY() - p1.getY()) - (p2.getX() - p1.getX())
			  * (p1.getY() - p.getY());

	Fixed b = (p2.getX() - p.getX())
			  * (p3.getY() - p2.getY()) - (p3.getX() - p2.getX())
			  * (p2.getY() - p.getY());

	Fixed c = (p3.getX() - p.getX())
			  * (p1.getY()- p3.getY()) - (p1.getX() - p3.getX())
			  * (p3.getY() - p.getY());

	if ((a >= 0 && b >= 0 && c >= 0) || (a <= 0 && b <= 0 && c <= 0))
		return (true);
	else
		return (false);
}

