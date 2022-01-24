#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() : ind(0)
{
	for (unsigned i = 0; i < ARR_LEN; i++)
		materias[i] = nullptr;
	std::cout << "MateriaSource is created" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	for (int i = 0; i < ARR_LEN; i++)
	{
		if (other.materias[i])
			materias[i] = (other.materias[i])->clone();
	}
	ind = other.ind;
	std::cout << "MateriaSource was created from copy" << std::endl;
}

AMateria * MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < ARR_LEN; i++)
	{
		if (materias[i]->getType() == type)
			return (this->materias[i]->clone());
	}
	return (NULL);
}

void MateriaSource::learnMateria(AMateria *other)
{
	if (ind < ARR_LEN)
	{
		materias[ind] = other;
		std::cout << "Materia " << other->getType()
				  << " was learned (put in slot " << ind++ << ")" << std::endl;
	}
	else
		std::cout << "MateriaSource storage is full" << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < ARR_LEN; i++)
	{
		if (materias[i] != nullptr)
			delete materias[i];
	}
}