#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal()
{
	std::cout << "Was called default WrongAnimal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "Was called protected WrongAnimal constructor with one argument" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : _type(other._type)
{
	std::cout << "Was called WrongAnimal(" << _type << ") copy constructor" << std::endl;
}

std::string WrongAnimal::getType() const { return _type; }

WrongAnimal::~WrongAnimal()
{
	std::cout << "Was called WrongAnimal(" << _type << ") destructor" << std::endl;
}

void WrongAnimal::makeSound() const {}

WrongAnimal & WrongAnimal::operator =(const WrongAnimal &other)
{
	_type = other.getType();
	return *this;
}