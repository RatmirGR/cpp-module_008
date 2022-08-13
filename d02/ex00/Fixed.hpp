#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed{

private:
	int _value;
	static const int _fractional_bits = 8;

public:
	Fixed( void );
	~Fixed( void );
	Fixed(const Fixed& f);
	Fixed& operator = (Fixed const &f);
	void setRawBits(int const raw);
	int getRawBits( void ) const;
};

#endif