#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0){
}

Fixed::Fixed(const Fixed& f){
	*this = f;
}

Fixed::Fixed(const int i){
	this->_value = i * (1 << Fixed::_fractional_bits);
}

Fixed::Fixed(const float fl){
	this->_value = roundf(fl * (1 << Fixed::_fractional_bits));
}

Fixed::~Fixed(void){
}

Fixed& Fixed::operator=(const Fixed &f){
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

bool Fixed::operator>(Fixed const &f) const{
	return (this->_value > f.getRawBits());
}

bool Fixed::operator<(Fixed const &f) const{
	return (this->_value < f.getRawBits());
}

bool Fixed::operator>=(Fixed const &f) const{
	return (this->_value >= f.getRawBits());
}

bool Fixed::operator<=(Fixed const &f) const{
	return (this->_value <= f.getRawBits());
}

bool Fixed::operator==(Fixed const &f) const{
	return (this->_value == f.getRawBits());
}

bool Fixed::operator!=(Fixed const &f) const{
	return (this->_value != f.getRawBits());
}

Fixed Fixed::operator+(Fixed const &f) const{
	return Fixed((this->toFloat() + f.toFloat()));
}

Fixed Fixed::operator-(Fixed const &f) const{
	return Fixed((this->toFloat() - f.toFloat()));
}

Fixed Fixed::operator*(Fixed const &f) const{
	return Fixed(this->toFloat() * f.toFloat());
}

Fixed Fixed::operator/(Fixed const &f) const{
	return Fixed(this->toFloat() / f.toFloat());
}

Fixed& Fixed::operator++(){
	++(this->_value);
	return (*this);
}

Fixed Fixed::operator++(int){
	Fixed copy = (*this);
	++(*this);
	return (copy);
}

Fixed& Fixed::operator--(){
	--(this->_value);
	return (*this);
}

Fixed Fixed::operator--(int){
	Fixed copy = (*this);
	--(*this);
	return (copy);
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
	return(f1 > f2 ? f2 : f1);
}

Fixed &Fixed::min(const Fixed &f1, const Fixed &f2)
{
	static Fixed min = f1 > f2 ? f2 : f1;
	return(min);
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
	return(f1 < f2 ? f2 : f1);
}

Fixed &Fixed::max(const Fixed &f1, const Fixed &f2)
{
	static Fixed max = f1 < f2 ? f2 : f1;
	return(max);
}
