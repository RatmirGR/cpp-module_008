#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& f) : _value(f._value){
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &f){
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = f.getRawBits();
	return (*this);
}

Fixed::~Fixed(void){
	std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits(const int raw){
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

