#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat"){
	std::cout << "WrongCat - Default Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& wrongCat)
{
	std::cout << "WrongCat - Copy Constructor Cat" << std::endl;
	*this = wrongCat;
}

WrongCat::~WrongCat(void){
	std::cout << "WrongCat - Default Destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat const &wrongCat)
{
	this->_type = wrongCat.getType();
	return (*this);
}

void WrongCat::makeSound(void) const{
	std::cout << "WrongCat - makes a sound " << std::endl;
}
