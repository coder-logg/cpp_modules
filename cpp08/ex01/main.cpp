#include <iostream>
#include "span.hpp"

int main ()
{
    std::cout << "------//5 numbers//------" << std::endl;
    span sp = span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
    std::cout << "longestSpan: " << sp.longestSpan() << std::endl;

    std::cout << "------//100000 numbers//------" << std::endl;
    std::srand(std::time(nullptr));
    span spn = span(100000);
    for(int i = 0; i < 100000; i++)
        spn.addNumber(std::rand() % 100);

    std::cout << "shortestSpan: " << spn.shortestSpan() << std::endl;
    std::cout << "longestSpan: " << spn.longestSpan() << std::endl;

    try
    {
        span sp(3);
        sp.addNumber(4);
        sp.addNumber(4);
        sp.addNumber(4);
        sp.addNumber(4);
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << '\n';
    }
	
    try
    {
        span sp(3);
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << '\n';
    }
	
	return 0;
}

