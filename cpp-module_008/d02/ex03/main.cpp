#include "Point.hpp"

int main(void){

	Point a(2, 3);
	Point b(8, 1);
	Point c(5, 5);
	Point x(1, 3);
	Point y(2, 2.5);

	Point *st = new Point();
	delete st;

	if (bsp(a, b, c, x))
		std::cout << "Inside the triangle";
	else
		std::cout << "Outside the triangle";
	std::cout << std::endl;
	return (0);
}