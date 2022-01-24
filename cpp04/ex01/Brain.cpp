#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "Was called default Brain constructor" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Was called Brain destructor" << std::endl;
}

Brain::Brain(const Brain &brain)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = brain.ideas[i];
	std::cout << "Was called Brain copy constructor" << std::endl;
}

Brain &Brain::operator =(Brain const &brain)
{
	if (this != &brain)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = brain.ideas[i];
	}
	std::cout << "Was called Brain assignation operator" << std::endl;
	return (*this);
}