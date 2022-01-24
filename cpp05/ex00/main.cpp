#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

//void print_revers(std::string str);
void test(std::string name, int grade, int level);

int main (void)
{
	Bureaucrat bur("Alex", 5);
	test("Carl", 5, 0);
	test("Albert De Salvo", 0, 0);
	test("James Olmos Cunningham", 151, 0);
	test("Evan Redgrave", 5, 1);
	test("Pete Fergusson", 1, 1);
	test("Peter Dong", 149, -1);
	test("Rose Everdeen", 150, -1);

	return (0);
}

void test(std::string name, int grade, int level)
{
	std::cout << "-------------------"+ name +"-----------------------" << std::endl;
	try
	{
		Bureaucrat bur(name, grade);
		std::cout << bur << std::endl;
		if (level == 1)
		{
			bur.increaseGrade();
			std::cout << bur << std::endl;
		}
		else if (level == -1)
		{
			bur.downGrade();
			std::cout << bur << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
