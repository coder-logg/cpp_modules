#include "Cat.hpp"
#include <iostream>

Cat::Cat() : Animal("cat")
{
	std::cout << "Was called default Cat constructor" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Was called Cat destructor" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "meow-meow-meow-meow-meow" << std::endl;
}