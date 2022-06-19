#include "Animal.hpp"

Animal::Animal(void): _type("Animal"){
	std::cout << "Animal - Default Constructor called" << std::endl;
}

Animal::Animal(const Animal& animal){
	std::cout << "Animal - Copy constructor called" << std::endl;
	*this = animal;
}

Animal::Animal(std::string type): _type(type){
	std::cout << "Animal - Constructor with string parameter called" << std::endl;
}

Animal::~Animal(void){
	std::cout << "Animal - Default Destructor called" << std::endl;
}

Animal& Animal::operator=(Animal const &animal){
	std::cout << "Animal - Copy assignment operator called" << std::endl;
	this->_type = animal.getType();
	return (*this);
}

void Animal::set_type(std::string type){
	this->_type = type;
}

std::string Animal::getType(void) const{
	return (this->_type);
}

void Animal::makeSound(void) const{
	std::cout << "Animal - makes a sound" << std::endl;
}