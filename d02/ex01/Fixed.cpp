#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& f){
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed::Fixed(const int i){
	std::cout << "Int constructor called" << std::endl;
	this->_value = i * (1 << Fixed::_fractional_bits);
}

Fixed::Fixed(const float fl){
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(fl * (1 << Fixed::_fractional_bits));
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &f){
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = f.getRawBits();
	return (*this);
}

void Fixed::setRawBits(const int raw){
	this->_value = raw;
}

int Fixed::getRawBits() const
{
	return (this->_value);
}

int Fixed::toInt( void ) const{
	return ((int)this->_value / (1 << (this->_fractional_bits)));
}

float Fixed::toFloat( void ) const{
	return ((float)this->_value / (1 << (this->_fractional_bits)));
}

std::ostream& operator<<(std::ostream& output, Fixed const &f){
	output << f.toFloat();
	return (output);
}
