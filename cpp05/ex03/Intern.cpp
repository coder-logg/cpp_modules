#include "Intern.hpp"

Intern::Intern()
{
	_formArr[0] = new PresidentialPardonForm();
	_formArr[1] = new RobotomyRequestForm();
	_formArr[2] = new ShrubberyCreationForm();
}

Intern::~Intern()
{
	for (int i = 0; i < 3; i++)
		delete _formArr[i];
}

Form *Intern::makeForm(const std::string &form, const std::string &target)
{
	for (int i = 0; i < 3; i++)
	{
		if (form == _formArr[i]->getName())
		{
			_formArr[i]->setTarget(target);
			return _formArr[i]->clone();
		}
	}
	return nullptr;
}
