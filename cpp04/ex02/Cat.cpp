#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal("cat"), brain(new Brain())
{
	std::cout << "Was called default Cat constructor" << std::endl;
}

Cat::Cat(Cat const &copy):Animal(copy){
	std::cout << "Was called Cat copy constructor" << std::endl;
	*this = copy;
}

Brain *Cat::getBrain() const
{
	return brain;
}

Cat&	Cat::operator =(Cat const &other)
{
	this->_type = other._type;
	*brain = *(other.getBrain());
	return (*this);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Was called Cat destructor" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "meow-meow-meow-meow-meow" << std::endl;
}