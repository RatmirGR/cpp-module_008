#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat"){
	std::cout << "Cat - Default Constructor called" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(const Cat& cat){
	std::cout << "Cat - Copy Constructor Cat" << std::endl;
	this->brain = new Brain(*cat.brain);
	this->_type = cat.getType();
}

Cat::~Cat(void){
	std::cout << "Cat - Default Destructor called" << std::endl;
	delete this->brain;
}

Cat& Cat::operator=(Cat const &cat)
{
	this->brain = new Brain(*cat.brain);
	this->_type = cat.getType();
	return (*this);
}

void Cat::makeSound(void) const{
	std::cout << "Cat - makes a sound - meow meow " << std::endl;
}

Brain& Cat::getBrain() const
{
	return (*this->brain);
}