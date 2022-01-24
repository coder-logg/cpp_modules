#ifndef INTERN_HPP
#define INTERN_HPP
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <string>
#include <iostream>

class Intern
{
private:
	Form *_formArr[3];
public:
	Intern();
	virtual ~Intern();
	Form *makeForm(const std::string &form, const std::string &target);
};


#endif //INTERN_HPP
