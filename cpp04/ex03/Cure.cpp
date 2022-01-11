#include "Cure.hpp"
#include <iostream>

Cure::Cure() : AMateria("cure")
{
	std::cout << "Was called Cure constructor" << std::endl;
}

Cure::Cure(const Cure &other) : AMateria(other)
{
	std::cout << "Was called Cure copy constructor" << std::endl;
	if (_type == other.getType())
		_hpRestored = other._hpRestored;
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure destruction" << std::endl;
}

Cure & Cure::operator =(const Cure &ice)
{
	std::cout << "Was called Cure assignation operator" << std::endl;
	_hpRestored = ice._hpRestored;
	return *this;
}

AMateria * Cure::clone() const
{
	AMateria *res = new Cure(*this);
	return res;
}

