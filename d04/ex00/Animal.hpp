#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal{

protected:
	std::string _type;
    int         _grade;

public:
	Animal(void);
	Animal(const Animal& animal);
	Animal(std::string type);
	virtual ~Animal(void);

	Animal& operator=(Animal const &other);
	void set_type(std::string);
	std::string getType(void) const;
	virtual void makeSound(void) const;
};

#endif
