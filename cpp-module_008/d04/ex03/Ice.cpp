#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	//std::cout << "Ice - Default Constructor called" << std::endl;
}

Ice::Ice(Ice const & other) : AMateria(other.getType())
{
	//std::cout << "Ice - Copy constructor called" << std::endl;
}

Ice::~Ice()
{
	//std::cout << "Ice - Default Destructor called" << std::endl;
}

Ice& Ice::operator=(Ice const&)
{
	//std::cout << "Ice - Copy assignment operator called" << std::endl;
	return *this;
}

AMateria* Ice::clone() const
{
	return new Ice();
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
