#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <string>
#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
private:
	std::string	name;
public:
	DiamondTrap(const std::string& name);
	DiamondTrap(const DiamondTrap& other);
	DiamondTrap(void);
	~DiamondTrap(void);

	DiamondTrap& operator=(DiamondTrap const &dt);
	void attack(std::string const &target);
	void	whoAmI(void);
};


#endif
