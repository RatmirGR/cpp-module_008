#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"

#define SIZE_CHARACTER 4

class Character : public ICharacter{

private:
	std::string _name;
	AMateria*	amateria[4];

public:
	Character(void);
	Character(const std::string &name);
	Character(const Character& character);
	virtual ~Character();

	Character& operator=(Character const& other);

	virtual std::string const& getName() const;
	virtual void equip(AMateria* aMateria);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};

#endif
