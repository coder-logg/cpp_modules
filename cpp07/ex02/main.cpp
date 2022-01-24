#include <iostream>
#include "iter.hpp"

template<typename T> void increment(T &t)
{
	t = t + 1;
}

template<typename T> void printelm(T &t)
{
	std::cout << t << ", ";
}

template<typename T> void printArr(T t[], size_t arrLen, std::string name)
{
	std::cout << name + ":	[";
	::iter(t, arrLen, printelm);
	std::cout << "]" << std::endl;
}

int main() {
	char arr[11] = "abcdghefdp";
	int b[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

	printArr(b, 10, "int");
	::iter(b, 10, increment);
	printArr(b, 10, "int");

	printArr(arr, 10, "char");
	::iter(arr, 10, increment);
	printArr(arr, 10, "char");
	return 0;
}


