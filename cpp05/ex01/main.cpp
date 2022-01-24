//#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <string>
#include <iostream>

void test_form(Bureaucrat &bur, std::string nameForm, int gradeSigned)
{
	int gradeDo = 42;
	try
	{
		std::cout << bur << std::endl;
		Form f(nameForm, gradeSigned, gradeDo);
		std::cout << f << std::endl;
		bur.signForm(f);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int main (void)
{
	Bureaucrat bur("Alex", 5);
	test_form(bur, "FORM_54352", 7);
	test_form(bur, "FORM_00011", 3);
	return (0);
}

