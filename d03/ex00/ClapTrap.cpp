#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0){
	std::cout << "Constructor with string parameter called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ct){
	std::cout << "Copy constructor called" << std::endl;
	*this = ct;
}

ClapTrap::~ClapTrap(void){
	std::cout << "Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &ct){
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name = ct._name;
	this->_hitPoints = ct._hitPoints;
	this->_energyPoints = ct._energyPoints;
	this->_attackDamage = ct._attackDamage;
	return (*this);
}

void ClapTrap::attack(const std::string &target){
	if (this->_energyPoints < 1)
		return;
	this->_energyPoints--;
	std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!";
	std::cout << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	this->_hitPoints -= amount;
	this->_energyPoints -= amount / 2;
	std::cout << "ClapTrap " << _name << " take damage " << _hitPoints << " hit points and "
			  << _energyPoints << " energy points";
	std::cout << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	this->_hitPoints += amount;
	this->_energyPoints += amount / 2;
	std::cout << "ClapTrap " << _name << " has been repaired " << _hitPoints << " hit points and "
			  << _energyPoints << " energy points";
	std::cout << std::endl;
}