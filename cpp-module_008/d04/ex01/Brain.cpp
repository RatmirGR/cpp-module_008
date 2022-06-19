#include "Brain.hpp"

Brain::Brain(void){
	std::cout << "Brain - Default Constructor called" << std::endl;
}

Brain::Brain(const Brain& brain){
	std::cout << "Brain - Copy constructor called" << std::endl;
	*this = brain;
}

Brain::~Brain(void){
	std::cout << "Brain - Default Destructor called" << std::endl;
}

Brain& Brain::operator=(Brain const &other){
	std::cout << "Brain - Copy assignment operator called" << std::endl;
	for (int i = 0; i < 100; ++i)
		this->ideas[i] = other.ideas[i];
	return (*this);
}
