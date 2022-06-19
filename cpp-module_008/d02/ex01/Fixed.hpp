#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <ostream>
#include <string>
#include <cmath>

class Fixed{

private:
	int _value;
	static const int _fractional_bits = 8;

public:
	Fixed( void );
	~Fixed( void );
	Fixed(const Fixed& f);
	Fixed& operator = (Fixed const &f);
	Fixed(const int i);
	Fixed(const float fl);
	void setRawBits(int const raw);
	int getRawBits( void ) const;
	float toFloat( void ) const;
	int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& output, Fixed const &f);

#endif