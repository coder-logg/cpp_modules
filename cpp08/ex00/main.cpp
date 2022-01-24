#include <iostream>
#include "Array.hpp"

int main ()
{
	Array<int>		intArray(10);
	Array<double>	doubleArray(10);

	for (unsigned int count = 0; count < intArray.size(); ++count)
	{
		intArray[count] = count;
		doubleArray[count] = count + 0.5;
		std::cout << intArray[count] << "  " << doubleArray[count] << std::endl;
	}

	try
	{
		for (unsigned int count = 0; count < intArray.size() + 1; ++count)
			std::cout << intArray[count] << "  " << doubleArray[count] << std::endl;
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	return 0;
}

