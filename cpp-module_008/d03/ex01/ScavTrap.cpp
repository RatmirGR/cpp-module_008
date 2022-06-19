#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void){
	std::cout << "ScavTrap - Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	std::cout << "ScavTrap - Constructor with string parameter called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& ct): ClapTrap(ct._name){
	std::cout << "ScavTrap - Copy constructor called" << std::endl;
	*this = ct;
}

ScavTrap::~ScavTrap(void){
	std::cout << "ScavTrap - Destructor called " << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &ct){
	std::cout << "ScavTrap - Copy assignment operator called" << std::endl;
	this->_name = ct._name;
	this->_hitPoints = ct._hitPoints;
	this->_energyPoints = ct._energyPoints;
	this->_attackDamage = ct._attackDamage;
	return (*this);
}

void ScavTrap::attack(std::string const &target){
	std::cout << "ScavTrap " << _name << " attack " << target << " causing " <<  _attackDamage << " points of damage!" <<
	std::endl;
}

void ScavTrap::guardGate(void){
	std::cout << "ScavTrap have enterred in Gate keeper mode" << std::endl;
}

