#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog"){
	std::cout << "Dog - Default Constructor called" << std::endl;
}

Dog::Dog(const Dog& dog){
	std::cout << "Dog -  Copy Constructor Cat" << std::endl;
	*this = dog;
}

Dog::~Dog(void){
	std::cout << "Dog - Default Destructor called" << std::endl;
}

Dog& Dog::operator=(Dog const &dog)
{
	this->_type = dog.getType();
	return (*this);
}

void Dog::makeSound(void) const{
	std::cout << "Dog - makes a sound - bark bark " << std::endl;
}