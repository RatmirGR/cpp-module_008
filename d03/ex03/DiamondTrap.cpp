#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "<DiamondTrap default constructor has been called!" << std::endl;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"),
FragTrap(name + "_clap_name"), name(name)
{
	std::cout << "<DiamondTrap " << this->_name << "> Status: Created" << std::endl;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other._name + "_clap_trap"), ScavTrap(other._name +
"_clap_trap"), FragTrap(other._name +
		"_clap_trap")
{
	std::cout << "<DiamondTrap copy-constructor has been called!> Status: Cloned" << std::endl;
	this->_name = other._name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "<DiamondTrap " << this->_name << "> Status: Dead" << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "<DiamondTrap - " << this->_name << "> DiamondTrap->name: " << this->_name << std::endl;
	std::cout << "<DiamondTrap - " << this->_name << "> ClapTrap->name: " << ClapTrap::_name << std::endl;
	std::cout << this->_hitPoints << " | " << ClapTrap::_name << std::endl;
	std::cout << this->_energyPoints << " | " << ClapTrap::_name << std::endl;
	std::cout << this->_attackDamage << " | " << ClapTrap::_name << std::endl;
}