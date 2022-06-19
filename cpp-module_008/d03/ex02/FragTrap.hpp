#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
public:
	FragTrap(void);
	~FragTrap(void);
	FragTrap(std::string name);
	FragTrap(const FragTrap& c);
	FragTrap& operator=(FragTrap const &c);
	void highFivesGuys(void);
};

#endif
