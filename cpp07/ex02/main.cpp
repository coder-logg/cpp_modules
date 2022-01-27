#include <iostream>
#include "Array.hpp"

int main ()
{
	Array<int>		intArray(10);
	Array<double>	doubleArray(10);

	for (int i = 0; i < static_cast<int>(intArray.size()); ++i)
	{
		intArray[i] = i;
		doubleArray[i] = i + 0.5;
		std::cout << intArray[i] << "  " << doubleArray[i] << std::endl;
	}

    std::cout << "--------------------" << std::endl;
	try
	{
		for (int i = 0; i < static_cast<int>(intArray.size()) + 1; ++i)
			std::cout << intArray[i] << "  " << doubleArray[i] << std::endl;
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	return 0;
}

