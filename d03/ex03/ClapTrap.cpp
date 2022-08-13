#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap - default constructor has been called!" << std::endl;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "<ClapTrap copy-constructor has been called!> Status: Cloned" << std::endl;
	*this = other;

}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "<ClapTrap = " << name << "> " << "Status: Created" << std::endl;
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "<ClapTrap - " << this->_name << "> " << "Status: Dead" << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	this->setName(other.getName());
	this->setHitPoints(other.getHitPoints());
	this->setEnergyPoints(other.getEnergyPoints());
	this->setAttackDamage(other.getAttackDamage());

	return (*this);
}

const std::string&	ClapTrap::getName(void) const
{
	return (this->_name);
}

unsigned int	ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

unsigned int	ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

unsigned int	ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}

void	ClapTrap::setName(const std::string& name)
{
	this->_name = name;
}

void	ClapTrap::setHitPoints(unsigned int hitPoints)
{
	this->_hitPoints = hitPoints;
}

void	ClapTrap::setEnergyPoints(unsigned int energyPoints)
{
	this->_energyPoints = energyPoints;
}

void	ClapTrap::setAttackDamage(unsigned int damage)
{
	this->_attackDamage = damage;
}


void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints < 2)
	{
		std::cout << "<ClapTrap - " << this->_name << " does not have enough energy to attack> ";
		std::cout << "Energy: - " << this->_energyPoints << " Status: Exhausted" << std::endl;
	}
	else
	{
		this->_energyPoints -= 2;
		std::cout << "<ClapTrap " << this->_name << " attack " << target;
		std::cout << ", causing " << this->_attackDamage << " points of damage!> ";
		std::cout << "Energy: " << this->_energyPoints << " Status: Atacked" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount > this->_hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
	std::cout << "<ClapTrap " << this->_name << " got " << amount << " points of damage!>";
	std::cout << " Hitpoints: " << this->_hitPoints << " Status: Damaged" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_hitPoints += amount;
	std::cout << "<ClapTrap " << this->_name << " got repaired by " << amount << " points!>";
	std::cout << " Hitpoints: " << this->_hitPoints << " Status: Repaired" << std::endl;
}