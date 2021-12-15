#include "Fixed.hpp"
#include "../ex01/Fixed.hpp"

#include <iostream>

Fixed::Fixed() : number(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Default destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other) : number(other.number)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Assignation operator called" << std::endl;
	number = other.number;
	return *this;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return number;
}

void Fixed::setRawBits(const int rawBits)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->number = rawBits;
}