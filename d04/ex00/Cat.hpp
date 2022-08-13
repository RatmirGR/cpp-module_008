#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal{
public:
	Cat(void);
	Cat(const Cat& cat);
	~Cat(void);

	Cat& operator=(Cat const &cat);
	void makeSound(void) const;
};

#endif
