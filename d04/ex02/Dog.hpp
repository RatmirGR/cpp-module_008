#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
private:
	Brain *brain;
public:
	Dog(void);
	Dog(const Dog& dog);
	~Dog(void);

	Brain& getBrain() const;

	Dog& operator=(Dog const &dog);
	void makeSound(void) const;
};

#endif
