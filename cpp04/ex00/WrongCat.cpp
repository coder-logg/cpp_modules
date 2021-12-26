#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "Was called default WrongCat constructor" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Was called WrongCat destructor" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "moo-moo-moo-moo-moo" << std::endl;
}