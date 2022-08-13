#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
public:
	FragTrap(const std::string& name);
	FragTrap(const FragTrap& other);
	FragTrap(void);
	~FragTrap(void);

	FragTrap& operator=(FragTrap const &ft);
	void	highFivesGuys(void) const;
};


#endif
