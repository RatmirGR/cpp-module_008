#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal{

protected:
	std::string _type;

public:
	WrongAnimal(void);
	WrongAnimal(const WrongAnimal& wrongAnimal);
	WrongAnimal(std::string type);
	virtual ~WrongAnimal(void);

	WrongAnimal& operator=(WrongAnimal const &other);
	void set_type(std::string);
	std::string getType(void) const;
	void makeSound(void) const;
};

#endif
