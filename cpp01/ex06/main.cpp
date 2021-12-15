#include "Karen.hpp"
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	Karen	karen;

	std::string argv1(argv[1]);
	if (argc == 2 && ( !argv1.compare("DEBUG") || !argv1.compare("WARNING") || !argv1.compare("INFO") || !argv1.compare("ERROR")))
		karen.complain(argv[1]);
	return (0);
}