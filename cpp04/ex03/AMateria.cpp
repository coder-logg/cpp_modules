#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(const std::string  &type) : _type(type) {}

const std::string & AMateria::getType() const { return _type; }

AMateria::~AMateria(){}

AMateria::AMateria(const AMateria &other)
{
	if (_type == "")
		_type = other._type;
	if (_type != other.getType())
		std::cout << "AMateria copy error: objects have different types; "
					 "copying " + other.getType() + " to " + _type << std::endl;
}

void AMateria::use(ICharacter &target)
{
	std::cout << "AMateria(" + _type + ") used by " << target.getName() << std::endl;
}

