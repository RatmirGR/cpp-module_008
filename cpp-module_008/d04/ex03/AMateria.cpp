#include "AMateria.hpp"

AMateria::AMateria(void): _type("amateria"){
	//std::cout << "AMateria - Default Constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) :  _type(type)
{
	//std::cout << "AMateria - Constructor with string parameter called" << std::endl;
}


AMateria::~AMateria(void)
{
	//std::cout << "AMateria - Default Destructor called" << std::endl;
}


AMateria::AMateria(const AMateria & aMateria)
{
	//std::cout << "AMateria - Copy constructor called" << std::endl;
	*this = aMateria;
}


AMateria & AMateria::operator=(const AMateria & other)
{
	//std::cout << "AMateria - Copy assignment operator called" << std::endl;
	this->_type = other.getType();
	return (*this);
}

std::string const &AMateria::getType(void) const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	(void) target;
}