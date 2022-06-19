#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	//std::cout << "Cure - Default Constructor called" << std::endl;
}

Cure::Cure(Cure const & other) : AMateria(other.getType())
{
	//std::cout << "Cure - Copy constructor called" << std::endl;
}

Cure::~Cure()
{
	//std::cout << "Cure - Default Destructor called" << std::endl;
}

Cure& Cure::operator=(Cure const&)
{
	//std::cout << "Cure - Copy assignment operator called" << std::endl;
	return *this;
}

AMateria* Cure::clone() const
{
	return new Cure();
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
