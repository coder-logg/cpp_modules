#include "Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice"), _stability(10)
{
	std::cout << "Was called Ice constructor" << std::endl;
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::Ice(const Ice &type) : AMateria(type)
{
	std::cout << "Was called Ice copy constructor" << std::endl;
	if (_type == type.getType())
		_stability = type._stability;
}

Ice & Ice::operator =(const Ice &ice)
{
	std::cout << "Was called Ice assignation operator" << std::endl;
	_stability = ice._stability;
	return *this;
}

Ice::~Ice()
{
	std::cout << "Ice destruction" << std::endl;
}

AMateria * Ice::clone() const
{
	return new Ice(*this);
}