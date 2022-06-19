#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class  ScavTrap : public ClapTrap{
public:
	ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& c);
	~ScavTrap(void);

	ScavTrap& operator=(ScavTrap const &c);
	void attack(std::string const &target);
	void guardGate(void);
};

#endif
