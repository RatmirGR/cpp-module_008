#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

#define SIZE_MATERIALS 4

class MateriaSource : public IMateriaSource
{
private:
	AMateria *source[4];
public:
	MateriaSource(void);
	~MateriaSource(void);

	MateriaSource(const MateriaSource& materiaSource);

	MateriaSource &operator=(const MateriaSource& other);

	void learnMateria(AMateria *materia);
	AMateria *createMateria(const std::string &type);

};

#endif
