#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include <string>

int main (void)
{
	Intern someRandomIntern;
	Form* rrf;
	Bureaucrat Born("Born", 1);
	rrf = someRandomIntern.makeForm("PresidentialPardonForm", "Bender");
	Born.signForm(*rrf);
	Born.executeForm(*rrf);
	delete rrf;
	rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Terminator");
	Born.signForm(*rrf);
	Born.executeForm(*rrf);
	delete rrf;
	rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "NewTree");
	Born.signForm(*rrf);
	Born.executeForm(*rrf);
	delete rrf;
	return (0);
}

