#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <string>
#include <iostream>

void test_form(Bureaucrat &signer, Bureaucrat &executor, Form &form)
{
	std::cout << "-------------------" + form.getName() + "-------------------" << std::endl;
	std::cout << signer << std::endl;
	std::cout << executor << std::endl;
	std::cout << form << std::endl;
	signer.signForm(form);
	executor.executeForm(form);
}

int main (void)
{
	Bureaucrat bur1("Big Boss", 35);
	Bureaucrat bur2("Anton", 130);
	PresidentialPardonForm pardon("Navalny");
	ShrubberyCreationForm tree("tree");
	RobotomyRequestForm robotic("Valli");
	test_form(bur1, bur2, robotic);
	test_form(bur1, bur2, tree);
	test_form(bur1, bur2, pardon);
	return (0);
}

