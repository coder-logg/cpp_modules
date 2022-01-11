#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal("dog"), brain(new Brain())
{
	std::cout << "Was called default Dog constructor" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "Was called Dog copy constructor" << std::endl;
	*this = other;
}

Brain *Dog::getBrain() const
{
	return brain;
}

Dog&	Dog::operator =(Dog const &source)
{
	this->_type = source._type;
	this->brain = new Brain(*(source.brain));
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Was called Dog destructor" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "woof-woof-woof-woof-woof" << std::endl;
}