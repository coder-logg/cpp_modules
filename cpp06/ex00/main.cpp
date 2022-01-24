#include <string>
#include <iostream>
#include "Converter.hpp"

int main (int argc, char **argv)
{
	if (argc != 2 || (argc == 2 && argv[1][0] == 0))
	{
		std::cout << "ERROR: Expected one argument" << std::endl;
		return (0);
	}
	try
	{
		Converter converte(argv[1]);
		std::cout << converte << std::endl;
	}
	catch (std::string str)
	{
		std::cout << str << std::endl;
	}
	return (0);
}

