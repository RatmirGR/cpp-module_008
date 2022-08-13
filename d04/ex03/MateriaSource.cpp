#include "MateriaSource.hpp"


MateriaSource::MateriaSource()
{
	//std::cout << "MateriaSource - Default Constructor called" << std::endl;
	for (int i = 0; i < SIZE_MATERIALS; ++i) {
		source[i] = nullptr;
	}
}

MateriaSource::~MateriaSource() {
	//std::cout << "MateriaSource - Default Destructor called" << std::endl;
	for (int i = 0; i < SIZE_MATERIALS; ++i) {
		if (source[i])
			delete source[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource &materiaSource)
{
	if (&materiaSource == nullptr)
		return ;
	for (int i = 0; i < SIZE_MATERIALS; ++i)
	{
		if (materiaSource.source[i])
			this->source[i] = materiaSource.source[i]->clone();
		else
			this->source[i] = nullptr;
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this == &other)
		return (*this);
	for (int i = 0; i < SIZE_MATERIALS; ++i)
	{
		if (source[i])
		{
			delete source[i];
			source[i] = nullptr;
			this->source[i] = other.source[i]->clone();
		}
	}
	return (*this);
}

void  MateriaSource:: learnMateria(AMateria* amateria)
{
	if (amateria == nullptr)
		std::cout << "learnMateria is fail (empty)" << std::endl;
	else
	{
		for (int i = 0; i < SIZE_MATERIALS; ++i)
		{
			if (source[i] == nullptr)
			{
				source[i] = amateria;
				//std::cout << "learnMateria (success)" << std::endl;
				return;
			}
		}
		std::cout << "learnMateria is fail (full)" << std::endl;
	}
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < SIZE_MATERIALS; ++i)
	{
		if (source[i] && source[i]->getType() == type)
				return (source[i]->clone());
	}
	return (nullptr);
}