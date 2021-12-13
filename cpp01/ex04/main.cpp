#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char** argv)
{
	if (argc != 4)
	{
		std::cout << "usage: ./replace [path to file] [string that will be replaced] [string to replce]" << std::endl;
		return 1;
	}

	std::ifstream in(argv[1]);
	if (!in.is_open())
	{
		std::cout << "Wrong path" << std::endl;
		return 1;
	}
	std::ofstream out(std::string(argv[1]) + ".replace");
	size_t i;
	std::string line;
	std::string str1(argv[2]);
	std::string str2(argv[3]);
	while (getline(in, line))
	{
		if ((i = line.find(str1)) != std::string::npos)
			line.replace(i, str1.size(), str2);
		out << line << std::endl;
	}
	return (0);
}