#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	const Animal* meta		= new Animal();
	const Animal* j			= new Dog();
	const Animal* i			= new Cat();
	const WrongAnimal *wc	= new WrongCat();

	std::cout << "--------------------------" << std::endl;
	std::cout << j->getType() << " ";
	j->makeSound();
	std::cout << i->getType() << " ";
	i->makeSound();

	std::cout << "--------------------------" << std::endl;
	std::cout << wc->getType() << " ";
	wc->makeSound();
	std::cout << "--------------------------" << std::endl;
	delete meta;
	delete j;
	delete i;
	delete wc;
	return 0;
}