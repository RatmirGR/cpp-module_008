#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
public:
	ScavTrap(const std::string& name);
	ScavTrap(const ScavTrap& other);
	ScavTrap(void);
	~ScavTrap(void);

	ScavTrap& operator=(ScavTrap const &st);
	void	attack(const std::string& target);
	void	guardGate(void) const;
};



#endif
