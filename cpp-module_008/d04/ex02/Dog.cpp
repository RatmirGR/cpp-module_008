#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog"){
	std::cout << "Dog - Default Constructor called" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog& dog){
	std::cout << "Dog -  Copy Constructor Cat" << std::endl;
	this->brain = new Brain(*dog.brain);
	this->_type = dog.getType();
}

Dog::~Dog(void){
	std::cout << "Dog - Default Destructor called" << std::endl;
	delete this->brain;
}

Dog& Dog::operator=(Dog const &dog)
{
	this->brain = new Brain(*dog.brain);
	this->_type = dog.getType();
	return (*this);
}

void Dog::makeSound(void) const{
	std::cout << "Dog - makes a sound - bark bark " << std::endl;
}

Brain& Dog::getBrain() const
{
	return (*this->brain);
}