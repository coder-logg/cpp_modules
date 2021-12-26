#include "Animal.hpp"
#include <iostream>

Animal::Animal()
{
	std::cout << "Was called default Animal constructor" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Was called protected Animal constructor with one argument" << std::endl;
}

Animal::Animal(const Animal &other) : _type(other._type)
{
	std::cout << "Was called Animal(" << _type << ") copy constructor" << std::endl;
}

std::string Animal::getType() const { return _type; }

Animal::~Animal()
{
	std::cout << "Was called Animal(" << _type << ") destructor" << std::endl;
}

void Animal::makeSound() const {}

Animal & Animal::operator =(const Animal &other)
{
	_type = other.getType();
	return *this;
}