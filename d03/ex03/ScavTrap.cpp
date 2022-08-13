#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap - default constructor has been called!" << std::endl;

}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "<ScavTrap - " << this->_name << "> Status: Created" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "<ScavTrap - copy-constructor has been called!> Status: Cloned" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "<ScavTrap - " << this->_name << "> Status: Dead" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints < 1)
	{
		std::cout << "<ScavTrap - " << this->_name << " does not have enough energy to attack> ";
		std::cout << "Energy: - " << this->_energyPoints << " Status: Exhausted" << std::endl;
	}
	else
	{
		this->_energyPoints -= 5;
		std::cout << "<ScavTrap - " << this->_name << " attack " << target;
		std::cout << ", causing - " << this->_attackDamage << " points of damage!> ";
		std::cout << "Energy: - " << this->_energyPoints << " Status: Atacked" << std::endl;
	}
}

void	ScavTrap::guardGate(void) const
{
	std::cout << "<ScavTrap - " << this->_name << " is guarding the gates> ";
	std::cout << "Status: - Guarding" << std::endl;
}

