#include "Character.hpp"

Character::Character(void): _name("character")
{
	//std::cout << "AMateria - Default Constructor called" << std::endl;
	for (int i = 0; i < SIZE_CHARACTER; ++i) {
		this->amateria[i] = nullptr;
	}
}

Character::Character(const std::string  &name) : _name(name)
{
	//std::cout << "Character - Constructor with string parameter called" << std::endl;
	for (int i = 0; i < SIZE_CHARACTER; ++i) {
		this->amateria[i] = nullptr;
	}
}

Character::~Character()
{
	//std::cout << "Character - Default Destructor called" << std::endl;
	for (int i = 0; i < SIZE_CHARACTER; ++i) {
		if (this->amateria[i])
			delete this->amateria[i];
	}
}

Character:: Character(const Character &character)
{
	if (&character == nullptr)
		return ;
	this->_name = character._name;
	for (int i = 0; i < SIZE_CHARACTER; ++i) {
		if (character.amateria[i])
			this->amateria[i] = character.amateria[i]->clone();
		else
			this->amateria[i] = nullptr;
	}
}

Character& Character::operator=(const Character & other)
{
	if (this == &other)
		return (*this);
	this->_name = other._name;
	for (int i = 0; i < SIZE_CHARACTER; ++i)
	{
		if (this->amateria[i])
			delete this->amateria[i];
	}
	for (int i = 0; i < SIZE_CHARACTER; ++i) {
		this->amateria[i] = other.amateria[i]->clone();
	}
	return (*this);
}

const std::string &Character::getName() const
{
	return (_name);
}

void 	Character::equip(AMateria *m)
{
	if (m == nullptr)
		std::cout << "equip is fail - NULL" << std::endl;
	else
	{
		for (int i = 0; i < SIZE_CHARACTER; ++i)
		{
			if (this->amateria[i] == nullptr)
			{
				this->amateria[i] = m;
				//std::cout << "equip (success)" << std::endl;
				return;
			}
		}
		std::cout << "equip is fail (full)" << std::endl;
	}
}

void 	Character::unequip(int index)
{
	if (index < 0 || index >= SIZE_CHARACTER || this->amateria[index] == nullptr)
		std::cout << "unequip is fail" << std::endl;
	else if (this->amateria[index])
	{
		this->amateria[index] = nullptr;
		std::cout << "unequip (success)" << std::endl;
	}
}

void 	Character::use(int index, ICharacter &target)
{
	if (index >= 0 && index < SIZE_CHARACTER)
	{
		if (this->amateria[index])
			this->amateria[index]->use(target);
	}
}