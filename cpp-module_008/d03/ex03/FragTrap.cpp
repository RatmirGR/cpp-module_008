#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FragTrap - default constructor has been called!" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << "<FragTrap - " << this->_name << "> Status: Created" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "<FragTrap - copy-constructor has been called!> Status: Cloned" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::~FragTrap(void)
{
	std::cout << "<FragTrap - " << this->_name << "> Status: Dead" << std::endl;
}

void	FragTrap::highFivesGuys(void) const
{
	std::cout << "<FragTrap - " << this->_name << "> High Five Guys! Status: Friendly" << std::endl;
}