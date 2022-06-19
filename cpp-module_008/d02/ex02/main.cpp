#include <iostream>
#include "Fixed.hpp"

int	main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << "a > b: " << (a > b) << std::endl;
	std::cout << "a < b: " << (a < b) << std::endl;
	std::cout << "a >= b: " << (a >= b) << std::endl;
	std::cout << "a <= b: " << (a <= b) << std::endl;
	std::cout << "a == b: " << (a == b) << std::endl;
	std::cout << "a != b: " << (a != b) << std::endl;

	std::cout << "a + b: " << (a + b) << std::endl;
	std::cout << "a - b: " << (a - b) << std::endl;
	std::cout << "a * b: " << (a * b) << std::endl;
	std::cout << "a / b: " << (a / b) << std::endl;

	std::cout << "max a (or) b: " << Fixed::max(a, b) << std::endl;
	std::cout << "min a (or) b: " << Fixed::min(a, b) << std::endl;
	std::cout << "const max a (or) b: " << Fixed::max(a, b) << std::endl;
	std::cout << "const min a (or) b: " << Fixed::min(a, b) << std::endl;

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;

	return (0);
}