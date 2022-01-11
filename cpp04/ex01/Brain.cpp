#include "Brain.hpp"
#include <iostream>

Brain::Brain() : ideas(new std::string[100])
{
	std::cout << "Was called default Brain constructor" << std::endl;
}

Brain::~Brain()
{
	delete[] (ideas);
	std::cout << "Was called Brain destructor" << std::endl;
}

Brain::Brain(const Brain &brain)
{
	delete [] ideas;
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = brain.getIdeas()[i];
	std::cout << "Was called Brain copy constructor" << std::endl;
}

Brain &Brain::operator =(Brain const &brain)
{
	if (this != &brain)
	{
		delete [] ideas;
		this->ideas = new std::string[100];
		for (int i = 0; i < 100; i++)
			this->ideas[i] = brain.getIdeas()[i];
	}
	std::cout << "Was called Brain assignation operator" << std::endl;
	return (*this);
}

std::string *Brain::getIdeas() const
{
    return(this->ideas);
}