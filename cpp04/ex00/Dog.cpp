#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal("dog")
{
	std::cout << "Was called default Dog constructor" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Was called Dog destructor" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "woof-woof-woof-woof-woof" << std::endl;
}