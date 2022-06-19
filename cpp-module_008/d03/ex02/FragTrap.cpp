#include "FragTrap.hpp"

FragTrap::FragTrap(void){
	std::cout << "FragTrap - Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap - Constructor with string parameter called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& ct) : ClapTrap(ct._name){
	std::cout << "FragTrap - Copy constructor called" << std::endl;
	*this = ct;
}

FragTrap::~FragTrap(void){
	std::cout << "FragTrap - Destructor called " << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const &ct){
	std::cout << "FragTrap - Copy assignment operator called" << std::endl;
	this->_name = ct._name;
	this->_hitPoints = ct._hitPoints;
	this->_energyPoints = ct._energyPoints;
	this->_attackDamage = ct._attackDamage;
	return (*this);
}

void FragTrap::highFivesGuys(void){
	std::cout << " HighFivesGuys ! " << std::endl;
}