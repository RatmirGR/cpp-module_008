#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): _type("WrongAnimal"){
	std::cout << "WrongAnimal - Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other){
	std::cout << "WrongAnimal - Copy constructor called" << std::endl;
	*this = other;
}

WrongAnimal::WrongAnimal(std::string type): _type(type){
	std::cout << "WrongAnimal - Constructor with string parameter called" << std::endl;
}

WrongAnimal::~WrongAnimal(void){
	std::cout << "WrongAnimal - Default Destructor called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &other){
	this->_type = other.getType();
	return (*this);
}

void WrongAnimal::set_type(std::string type){
	this->_type = type;
}

std::string WrongAnimal::getType(void) const{
	return (this->_type);
}

void WrongAnimal::makeSound(void) const{
	std::cout << "WrongAnimal - makes a sound" << std::endl;
}