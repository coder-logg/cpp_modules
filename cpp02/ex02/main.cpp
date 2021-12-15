#include "Fixed.hpp"
#include <iostream>

int main()
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b);

	a = Fixed( 1234.4321f );

	int i  = 10;
	std::cout << "a + i is " << b + a << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
}