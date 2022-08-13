#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
public:
	WrongCat(void);
	WrongCat(const WrongCat& wrongCat);
	~WrongCat(void);

	WrongCat& operator=(WrongCat const &wrongCat);
	void makeSound(void) const;
};


#endif
