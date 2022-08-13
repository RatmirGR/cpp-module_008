#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat"){
	std::cout << "Cat - Default Constructor called" << std::endl;
}

Cat::Cat(const Cat& cat){
	std::cout << "Cat - Copy Constructor Cat" << std::endl;
	*this = cat;
}

Cat::~Cat(void){
	std::cout << "Cat - Default Destructor called" << std::endl;
}

Cat& Cat::operator=(Cat const &cat)
{
	this->_type = cat.getType();
	return (*this);
}

void Cat::makeSound(void) const{
	std::cout << "Cat - makes a sound - meow meow " << std::endl;
}