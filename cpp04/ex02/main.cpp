#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Animal* copy_j = new Dog(*((Dog *)j));

	std::cout << "----------------------" << std::endl;
	j->makeSound();
	i->makeSound();
	std::cout << "----------------------" << std::endl;
	copy_j->makeSound();
	std::cout << "----------------------" << std::endl;

	delete j;
	delete i;
	delete copy_j;
	return (0);
}