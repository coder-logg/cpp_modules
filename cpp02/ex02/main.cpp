#include "Fixed.hpp"
#include <iostream>
#include <limits>

int main()
{
	Fixed a;
	Fixed const b(Fixed( 5.05f) * Fixed(2 ));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;

	Fixed c(-1278.255f);
	Fixed const d(b);

	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	std::cout << "c is " << c.toFloat() << " as float" << std::endl;
	std::cout << "d is " << d.toFloat() << " as float" << std::endl;

	std::cout << "c / d is " << c / d << std::endl; // wrong
	std::cout << "c * d is " << c * d << std::endl;
	std::cout << "c - d is " << c - d << std::endl;
	std::cout << "c + d is " << c + d << std::endl;
	std::cout << "c < d is " << (c < d) << std::endl;
	std::cout << "c <= d is " << (c <= d) << std::endl;
	std::cout << "c > d is " << (c > d) << std::endl;
	std::cout << "c >= d is " << (c >= d) << std::endl;
	std::cout << "c == d is " << (c == d) << std::endl;
	std::cout << "max(c,d) is " << Fixed::max(c,d) << std::endl;
	std::cout << "min(c,d) is " << Fixed::min(c,d) << std::endl;
	return 0;
}