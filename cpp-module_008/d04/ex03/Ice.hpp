#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Ice: public AMateria{
public:
	Ice(void);
	Ice(const Ice& ice);
	virtual ~Ice();

	Ice &operator=(Ice const & other);
	virtual	AMateria* 	clone() const;
	virtual void 		use(ICharacter &target);
};

#endif
